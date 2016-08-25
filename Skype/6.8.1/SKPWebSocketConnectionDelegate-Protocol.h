//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSDate, NSError, NSInputStream, NSOutputStream, NSString, SKPWebSocketConnection;

@protocol SKPWebSocketConnectionDelegate

@optional
- (void)connection:(SKPWebSocketConnection *)arg1 rawData:(NSData *)arg2;
- (void)connection:(SKPWebSocketConnection *)arg1 socketActivity:(long long)arg2;
- (void)connection:(SKPWebSocketConnection *)arg1 willOpenInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
- (void)connection:(SKPWebSocketConnection *)arg1 didFailWithError:(NSError *)arg2;
- (void)connection:(SKPWebSocketConnection *)arg1 didReceiveText:(NSString *)arg2 atTime:(NSDate *)arg3;
- (void)connection:(SKPWebSocketConnection *)arg1 didConnect:(long long)arg2;
@end
