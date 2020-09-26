# qirc - C++/Qt5 weechat relay client.

## Qt5 Widgets not Quick

I'm not one of those 'hate everything that's new' people (somewhat obviously), but QtQuick itself
is a pseudo-sandbox. If I ever do add a plain irc server support module then I will have to implement
that in C++ anyway and I'd rather not deal with two languages and serialization. Yes, I do know JS,
that's not the reason.

## Isn't IRC Dying?

Yes, and that's tragic. That issue aside, I use IRC among other things. Currently I use
[Glowing Bear](https://glowing-bear.org) which is nice, but I do miss a native client,
particularly on my already slow Surface Pro (5). That is my main motive, but as an upside
I further my Qt5 knowledge, and when qt6 comes I have a baseline, and also do plan to go
beyond relay support.

## Licensing

It's pretty dumb that we're using effectively the threat of ruining your life (suit)
to detract plagiarism. Pretty inhumane and cruel too. Therefore in accordance with that
all the code that is mine in here is released to the public domain. I don't need attribution
but do remember that if you claim it as your own this is public and it's plagiarism.

## Wishlist

  - [ ] Add IRC protocol support
    
    My reasoning is if IRC was easier to use then more people would use it.

  - [ ] Add a sort of micro-server

    It'd be statically linked with a libc like musl that's tiny so that you can just
    drop it on a server and have a relay-type setup. Reasoning is also ease of use.

  - [ ] Public static client builds

    Also ease of use.

  - [ ] Android client and interface

    This would be so nice for the people who use android. I won't even try to do an iOS UI
    because I don't own a mac, and the government doesn't give enough ssdi to afford one. The
    Android build is low priority because I don't fancy writing androidized java. Also *redacted*
    Google.