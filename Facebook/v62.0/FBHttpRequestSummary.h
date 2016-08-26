/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:51 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBHttpRequestSummary.h>

@class NSHTTPURLResponse, NSString;

@interface FBHttpRequestSummary : NSObject <FBHttpRequestSummary> {

	unsigned long long _attempts;
	double _requestAddTime;
	double _requestBeginTime;
	double _requestEndTime;
	double _responseBeginTime;
	double _responseEndTime;
	unsigned long long _bytesUp;
	unsigned long long _bytesDownUncompressed;
	NSHTTPURLResponse* _httpResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long attempts;                           //@synthesize attempts=_attempts - In the implementation block
@property (nonatomic,readonly) double requestAddTime;                                 //@synthesize requestAddTime=_requestAddTime - In the implementation block
@property (nonatomic,readonly) double requestBeginTime;                               //@synthesize requestBeginTime=_requestBeginTime - In the implementation block
@property (nonatomic,readonly) double requestEndTime;                                 //@synthesize requestEndTime=_requestEndTime - In the implementation block
@property (nonatomic,readonly) double responseBeginTime;                              //@synthesize responseBeginTime=_responseBeginTime - In the implementation block
@property (nonatomic,readonly) double responseEndTime;                                //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesUp;                            //@synthesize bytesUp=_bytesUp - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesDownUncompressed;              //@synthesize bytesDownUncompressed=_bytesDownUncompressed - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * httpResponse;                      //@synthesize httpResponse=_httpResponse - In the implementation block
-(double)requestAddTime;
-(double)requestBeginTime;
-(double)responseBeginTime;
-(unsigned long long)bytesUp;
-(unsigned long long)bytesDownUncompressed;
-(unsigned long long)attempts;
-(id)initWithAttempts:(unsigned long long)arg1 requestAdd:(double)arg2 requestBegin:(double)arg3 requestEnd:(double)arg4 responseBegin:(double)arg5 responseEnd:(double)arg6 bytesUp:(unsigned long long)arg7 bytesDown:(unsigned long long)arg8 response:(id)arg9 ;
-(id)initWithAttempts:(unsigned long long)arg1 requestAdd:(double)arg2 ;
-(double)requestEndTime;
-(NSString *)description;
-(double)responseEndTime;
-(NSHTTPURLResponse *)httpResponse;
@end
