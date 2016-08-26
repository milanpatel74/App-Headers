/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface FBCollectionImagePrefetcherSpecifier : NSObject {

	BOOL _streaming;
	NSURL* _url;
	unsigned long long _desiredImageFlag;

}

@property (nonatomic,copy,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL streaming;                                   //@synthesize streaming=_streaming - In the implementation block
@property (nonatomic,readonly) unsigned long long desiredImageFlag;              //@synthesize desiredImageFlag=_desiredImageFlag - In the implementation block
-(id)initWithUrl:(id)arg1 streaming:(BOOL)arg2 desiredImageFlag:(unsigned long long)arg3 ;
-(unsigned long long)desiredImageFlag;
-(NSURL *)url;
-(BOOL)streaming;
-(id)uniqueKey;
@end
