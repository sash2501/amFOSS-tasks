require 'nokogiri'
require 'open-uri'

search =""
 print "Enter the word  "
search = gets
 
try = Array.new
# Fetch and parse HTML document
url = "https://www.google.co.in/search?num=11&q="+search
doc = Nokogiri::HTML(open(url))


#doc.search('.rso')

puts "### The following are the top 10 search results for linux ###"
try = doc.xpath('//a/div/text()').collect {|link| link.text.strip} 
  count=1
  i=2
try.each do |parsed|
    if i%2
	    puts "  #{parsed}"
	    puts " "
	    
    else
	    puts "#{count} #{parsed}"
    end
 i=i+1
 count=count+1
end


#/html/body/div[6]/div[3]/div[10]/div[1]/div[2]/div/div[2]/div[2]/div/div/div[1]/div/div[2]/div/div/div[1]/a/h3/div
