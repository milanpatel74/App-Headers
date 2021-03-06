/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>
#import <Facebook/FBPageActionHandling.h>

@class FBMemPage, FBUserSession, FBPageActionHandlerToolbox, UIActionSheet, FBButtonBarButton, NSString;

@interface FBPageSaveActionHandler : NSObject <UIActionSheetDelegate, FBPageActionHandling> {

	FBMemPage* _page;
	FBUserSession* _session;
	FBPageActionHandlerToolbox* _toolbox;
	UIActionSheet* _confirmationActionSheet;
	FBButtonBarButton* _actionSheetSourceButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_hasViewerSavedNonLocalEntity;
-(void)_updateSaveActionBarButton:(id)arg1 isSaveAction:(BOOL)arg2 ;
-(void)_performSaveAction:(BOOL)arg1 ;
-(id)initWithPage:(id)arg1 session:(id)arg2 toolbox:(id)arg3 ;
-(void)handleTapAction:(id)arg1 inView:(id)arg2 ;
-(void)_showConfirmationActionSheetWithActionBarButton:(id)arg1 inView:(id)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

