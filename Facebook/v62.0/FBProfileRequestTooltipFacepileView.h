/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSMutableArray, FBUserSession;

@interface FBProfileRequestTooltipFacepileView : UIView {

	NSMutableArray* _profilePictureViews;
	FBUserSession* _session;
	NSMutableArray* _downloads;

}
+(id)_facepileURLsForAvatars:(id)arg1 ;
+(id)facepileViewForAvatars:(id)arg1 session:(id)arg2 ;
-(id)initWithFacepileURLs:(id)arg1 session:(id)arg2 ;
-(void)_setFacepileURLs:(id)arg1 ;
-(id)_roundedImage:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end
