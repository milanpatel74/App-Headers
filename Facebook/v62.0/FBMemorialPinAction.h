/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFeedSecondaryAction.h>

@class FBFullscreenSpinnerController, FBMemFeedStory, FBMemPerson, FBUserSession, NSString;

@interface FBMemorialPinAction : NSObject <FBFeedSecondaryAction> {

	FBFullscreenSpinnerController* _fullscreenSpinnerController;
	FBMemFeedStory* _story;
	FBMemPerson* _memorializedPerson;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
-(id)initWithStory:(id)arg1 memorializedPerson:(id)arg2 session:(id)arg3 ;
-(id)title;
-(id)accessibilityIdentifier;
-(id)icon;
-(id)detail;
@end
