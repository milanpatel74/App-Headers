/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchDiscoverModelProtocol;
@class NSDictionary;

@interface FBSearchDiscoverResult : NSObject {

	id<FBSearchDiscoverModelProtocol> _model;
	NSDictionary* _userInfo;

}

@property (nonatomic,readonly) id<FBSearchDiscoverModelProtocol> model;              //@synthesize model=_model - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
-(id)initWithModel:(id)arg1 userInfo:(id)arg2 ;
-(NSDictionary *)userInfo;
-(id<FBSearchDiscoverModelProtocol>)model;
@end
