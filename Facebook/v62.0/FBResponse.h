/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBResponding.h>

@protocol FBRequest;
@class NSDictionary, NSError, NSString;

@interface FBResponse : NSObject <FBResponding> {

	id<FBRequest> _request;
	NSDictionary* _headers;
	NSError* _error;
	id _content;

}

@property (nonatomic,readonly) id content;                               //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBRequest> request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * headers;              //@synthesize headers=_headers - In the implementation block
-(id)initWithRequest:(id)arg1 headers:(id)arg2 content:(id)arg3 error:(id)arg4 ;
-(NSString *)description;
-(id<FBRequest>)request;
-(id)content;
-(NSDictionary *)headers;
-(NSError *)error;
@end
