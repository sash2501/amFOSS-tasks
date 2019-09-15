
package main
import (
    "flag"
    "github.com/dghubble/oauth1"
    "github.com/dghubble/go-twitter/twitter"
     "fmt"
     "os"
   
)
 var(
  user string
)

func init(){
  flag.StringVar(&user,"u","Sassy_SR","Search Users")
}

func main() {
  flag.Parse()
fmt.Println(user)

    config := oauth1.NewConfig("//", "//")
    token := oauth1.NewToken("//", "//")

    // httpClient will automatically authorize http.Request's
    httpClient := config.Client(oauth1.NoContext, token)

    // Twitter client
   client := twitter.NewClient(httpClient)

   
f, err := os.Create("file1.txt")
defer f.Close()
//b := []byte(user)
  f.WriteString(user)
  f.WriteString("\nThe following are the Twitter handles of the followers\n")




followers, resp, err := client.Followers.List( &twitter.FollowerListParams{
    ScreenName: user ,
    Count : 200 ,
})

var c int = 0

for index , follow := range followers.Users{
    c++
    fmt.Printf("Follower = %v, %v\n", index+1 , follow.ScreenName)
    f.WriteString(fmt.Sprintf("\nFollower = %d  ", index+1))
    f.WriteString(follow.ScreenName)
}

 f.WriteString("\n")


fmt.Printf("\nThe total number of followers = %d\n", c)

  if err != nil {
    fmt.Println(err, resp)
  return
  }
//fmt.Println(err, resp)
//fmt.Println(followers)

}
 