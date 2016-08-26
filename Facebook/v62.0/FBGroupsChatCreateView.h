/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBWebImageViewListener.h>

@protocol FBGroupsChatCreateViewDelegate;
@class FBUserSession, UIView, FBWebImageView, UIButton, UITextField, UIImageView, UIImage, NSString;

@interface FBGroupsChatCreateView : UIView <FBWebImageViewListener> {

	FBUserSession* _session;
	UIView* _titleBarView;
	FBWebImageView* _profileImagePlaceholder;
	FBWebImageView* _profileImagePlaceholderHighlighted;
	UIButton* _profileImageButton;
	UITextField* _textField;
	UIImageView* _errorIndicator;
	UIView* _titleBarBottomSeparator;
	UIView* _contentTopSeparator;
	UIView* _contentView;
	UIView* _grayOutOverlayView;
	id<FBGroupsChatCreateViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBGroupsChatCreateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * profileImage; 
@property (nonatomic,readonly) UITextField * textField;                                       //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)_didSelectProfilePhoto;
-(void)_layoutMainSections;
-(void)_layoutTitleBar;
-(void)_layoutProfileImage;
-(void)configureWithContentView:(id)arg1 suggestedName:(id)arg2 showSeparator:(BOOL)arg3 ;
-(void)processingNetworkRequest:(BOOL)arg1 ;
-(void)flashNamingErrorIndicator;
-(void)setDelegate:(id<FBGroupsChatCreateViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBGroupsChatCreateViewDelegate>)delegate;
-(UITextField *)textField;
-(id)initWithSession:(id)arg1 ;
-(void)setProfileImage:(UIImage *)arg1 ;
-(UIImage *)profileImage;
@end
