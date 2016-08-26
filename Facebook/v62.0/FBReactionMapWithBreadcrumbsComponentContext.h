/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemLocation, FBMemGeoRectangle, FBUserSession;

@interface FBReactionMapWithBreadcrumbsComponentContext : NSObject {

	FBMemLocation* _location;
	FBMemGeoRectangle* _boundingBox;
	FBUserSession* _userSession;

}

@property (nonatomic,readonly) FBMemLocation * location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) FBMemGeoRectangle * boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,readonly) FBUserSession * userSession;                  //@synthesize userSession=_userSession - In the implementation block
+(id)newWithLocation:(id)arg1 boundingBox:(id)arg2 userSession:(id)arg3 ;
-(FBMemLocation *)location;
-(FBMemGeoRectangle *)boundingBox;
-(FBUserSession *)userSession;
@end
