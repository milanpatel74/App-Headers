/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSIndexPath;

@interface FBNotificationsScrollRestorationIdentifier : NSObject {

	NSString* _cacheID;
	NSIndexPath* _mostLikelyIndexPath;

}

@property (nonatomic,copy,readonly) NSString * cacheID;                        //@synthesize cacheID=_cacheID - In the implementation block
@property (nonatomic,readonly) NSIndexPath * mostLikelyIndexPath;              //@synthesize mostLikelyIndexPath=_mostLikelyIndexPath - In the implementation block
-(id)initWithCacheID:(id)arg1 mostLikelyIndexPath:(id)arg2 ;
-(NSIndexPath *)mostLikelyIndexPath;
-(NSString *)cacheID;
@end
