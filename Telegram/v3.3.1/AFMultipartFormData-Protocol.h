//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSDictionary, NSString, NSURL;

@protocol AFMultipartFormData
- (void)appendString:(NSString *)arg1;
- (void)appendData:(NSData *)arg1;
- (_Bool)appendPartWithFileURL:(NSURL *)arg1 name:(NSString *)arg2 error:(id *)arg3;
- (void)appendPartWithFileData:(NSData *)arg1 name:(NSString *)arg2 fileName:(NSString *)arg3 mimeType:(NSString *)arg4;
- (void)appendPartWithFormData:(NSData *)arg1 name:(NSString *)arg2;
- (void)appendPartWithHeaders:(NSDictionary *)arg1 body:(NSData *)arg2;
@end
