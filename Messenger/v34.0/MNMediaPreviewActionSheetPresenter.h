/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNMediaPreviewActionSheetViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNMediaActionSheetPresentationListener, MNModalPresentation, MNMediaPreviewActionSheetPresenterDelegate;
@class FBAnalytics, NSString, MNTextAndAttachmentForwardContent, MNMediaPreviewActionSheetViewController;

@interface MNMediaPreviewActionSheetPresenter : NSObject <MNMediaPreviewActionSheetViewControllerDelegate, FBClassProvidable> {

	FBAnalytics* _analytics;
	NSString* _attributionAppId;
	MNTextAndAttachmentForwardContent* _replyContent;
	id<MNMediaActionSheetPresentationListener> _listener;
	MNMediaPreviewActionSheetViewController* _presentedVC;
	id<MNModalPresentation> _modalPresenter;
	id<MNMediaPreviewActionSheetPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMediaPreviewActionSheetPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_analyticsExtras;
-(id)initWithModalPresenter:(id)arg1 analytics:(id)arg2 listener:(id)arg3 ;
-(void)mediaPreviewActionSheetViewControllerDidCancel:(id)arg1 ;
-(void)mediaPreviewActionSheetViewController:(id)arg1 didSendContent:(id)arg2 ;
-(void)mediaPreviewActionSheetViewController:(id)arg1 didTapEditContent:(id)arg2 ;
-(void)mediaPreviewActionSheetViewControllerDidDeselectContent:(id)arg1 ;
-(void)mediaPreviewActionSheetViewController:(id)arg1 didTapAttribution:(id)arg2 ;
-(void)presentActionSheetWithContent:(id)arg1 delay:(double)arg2 inThreadWithKey:(id)arg3 ;
-(void)presentActionSheetWithViewController:(id)arg1 attributionViewModel:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<MNMediaPreviewActionSheetPresenterDelegate>)arg1 ;
-(id<MNMediaPreviewActionSheetPresenterDelegate>)delegate;
-(void)dismissAnimated:(BOOL)arg1 ;
@end
