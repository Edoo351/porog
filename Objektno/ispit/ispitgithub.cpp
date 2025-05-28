#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Post {
protected:
    string name;
    string contenent;
    bool photo;
    int likes;
public:
    Post(string name = "" , string contenent = "", bool photo = false, int likes=0)
        : photo(photo),
          likes(likes) {
        this->name=name;
        this->contenent=contenent;
        this->photo=photo;
        this->likes=likes;
    }
    virtual double popularity () const = 0;
    virtual void print() const = 0;

    bool operator>=(const Post &rhs) const {
        return (*this >= rhs);
    }

    bool photo1() const {
        return photo;
    }
};

class FacebookPost : public Post {
private:
    int shares;
public:
    FacebookPost(string &name, string &contenent, bool photo, int likes, int shares)
        : Post(name, contenent, photo, likes),
          shares(shares) {
        this->shares=shares;
    }
    void print() const override {
        cout << "Facebook post" << endl;
        cout << "Username: " << name << endl;
        cout << "Content: " << contenent << endl;
        if (photo) {
            cout << "With photo" << endl;
        } else {
            cout << "Without photo" << endl;
        }

        cout << "Likes: " << likes << " Shares: " << shares << endl;
        cout << "Popularity: " << popularity() << endl;
    }

    double popularity() const override {
        int total = likes * shares;
        if (photo) {
            total *= 1.20;
        }
        return total;
    }

    int shares1() const {
        return shares;
    }
};

class TwitterPost : public Post {
private:
    int retwets;
    int replies;
public:
    TwitterPost(string &name, string &contenent, bool photo, int likes, int retwets,
         int replies)
        : Post(name, contenent, photo, likes),
          retwets(retwets),
          replies(replies) {
        this->retwets=retwets;
        this->replies=replies;
    }
    double popularity() const override {
        double total = likes * retwets *  replies ;
        if (photo) {
            total *= 1.10;
        }
        if (contenent.find("#crypto") != -1) {
        total*=1.20;
        }
        return total;
    }
    void print() const override {
        cout << "Twitter Post" << endl;
        cout << "Username: " << name << endl;
        cout << "Content: " << contenent << endl;
        if (photo) {
            cout << "With photo" << endl;
        } else {
            cout << "Without photo" << endl;
        }

        cout << "Likes: " << likes<<"Retwets :"<<retwets << " Replies: " << replies << endl;
        cout << "Popularity: " << popularity() << endl;
    }

};

double mostPopularPostWithPhoto(Post **posts, int n) {
    double max = -1;
    for (int i = 0 ; i<n ; i++) {
        if (posts[i]->photo1()&&posts[i]->popularity()>max) {
            max = posts[i]->popularity();
        }
    }
    return max;
}

Post *readFbPost() {
    string username;
    string content;
    bool photo;
    int likes;
    int shares;
    cin.ignore();
    getline(std::cin, username);
    getline(std::cin, content);
    cin >> photo >> likes >> shares;
    return new FacebookPost(username, content, photo, likes, shares);
}

Post *readTwPost() {
    string username;
    string content;
    bool photo;
    int likes;
    int retweets;
    int replies;
    cin.ignore();
    getline(std::cin, username);
    getline(std::cin, content);
    cin >> photo >> likes >> retweets >> replies;
    return new TwitterPost(username, content, photo, likes, retweets, replies);
}

Post **readMultiplePosts(int *n) {

    cin >> *n;
    Post **posts = new Post *[*n];
    for (int i = 0; i < *n; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            posts[i] = readFbPost();
        } else {
            posts[i] = readTwPost();
        }
    }
    return posts;
}


FacebookPost *fbPostWithMaxShares(Post **posts, int n) {
    FacebookPost *result = nullptr;

    for (int i = 0; i < n; i++) {
        FacebookPost *casted = dynamic_cast<FacebookPost *>(posts[i]);
        if (casted) {
            if (result == nullptr || casted->shares1() > result->shares1() ) {
                result = casted;
            }
        }
    }

    return result;
}


int main() {
    int testCase;

    cin >> testCase;

    if (testCase == 1) {
        cout << "Test FacebookPost" << endl;
        Post *post = readFbPost();
        cout << "Popularity: " << post->popularity() << endl;
        post->print();
    } else if (testCase == 2) {
        cout << "Test TwitterPost" << endl;
        Post *post = readTwPost();
        cout << "Popularity: " << post->popularity() << endl;
        post->print();
    } else if (testCase == 3) {
        cout << "Test operator >=" << endl;
        int n;
        Post **posts = readMultiplePosts(&n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    if ((*posts[i]) >= (*posts[j])) {
                        cout << i << " >= " << j << endl;
                    } else {
                        cout << i << " < " << j << endl;
                    }
                }
            }
        }
    } else {
        int n;
        Post **posts = readMultiplePosts(&n);
        for (int i = 0; i < n; i++) {
            posts[i]->print();
            cout << endl;
        }
        cout << "The most popular post with photo has a popularity of: " << mostPopularPostWithPhoto(posts, n) << endl;
        cout << "The facebook post with most shares is ";
        fbPostWithMaxShares(posts,n)->print();
    }

    return 0;
}
