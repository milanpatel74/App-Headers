/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBProfileVideoComponentStateListener.h>

@class CKComponentHostingView, FBProfileVideoComponentStateListenerAnnouncer, NSString;

@interface FBProfileVideoView : UIView <FBProfileVideoComponentStateListener> {

	CKComponentHostingView* _profileVideoHostingView;
	FBProfileVideoComponentStateListenerAnnouncer* _stateAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithToolbox:(id)arg1 componentAnnouncer:(id)arg2 stateAnnouncer:(id)arg3 profileVideoTapResponder:(id)arg4 ;
-(void)didUpdateProfileVideoModel:(id)arg1 ;
-(void)didUpdateProfileVideoWithHidden:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end
