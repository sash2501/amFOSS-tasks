require 'nokogiri'
require 'open-uri'

# Fetch and parse HTML document
doc = Nokogiri::HTML(open("https://www.google.co.in/search?q=linux"))

puts "### Search for nodes by xpath ###"
doc.xpath("//a/h3//div").each do |link|
  puts link.text
  puts " "
end

#/html/body/div[6]/div[3]/div[10]/div[1]/div[2]/div/div[2]/div[2]/div/div/div[1]/div/div[2]/div/div/div[1]/a/h3/div