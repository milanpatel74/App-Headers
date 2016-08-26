/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBCrowdsourcingHomeInfoSectionViewDelegate.h>
#import <Facebook/FBCrowdsourcingHomePrivacySectionViewDelegate.h>
#import <Facebook/FBCrowdsourcingHomePhotoHeaderViewDelegate.h>

@protocol FBCrowdsourcingHomeViewDelegate, UITextFieldDelegate;
@class FBCrowdsourcingHomePhotoHeaderView, FBCrowdsourcingHomeInfoSectionView, FBCrowdsourcingHomePrivacySectionView, UIScrollView, FBPopoverActionSheet, NSString;

@interface FBCrowdsourcingHomeView : UIView <FBCrowdsourcingHomeInfoSectionViewDelegate, FBCrowdsourcingHomePrivacySectionViewDelegate, FBCrowdsourcingHomePhotoHeaderViewDelegate> {

	FBCrowdsourcingHomePhotoHeaderView* _photoView;
	FBCrowdsourcingHomeInfoSectionView* _infoView;
	FBCrowdsourcingHomePrivacySectionView* _privacyView;
	BOOL _isCityFieldEnabled;
	BOOL _canEditPlaceName;
	BOOL _showUploadProfilePicIcon;
	id<FBCrowdsourcingHomeViewDelegate> _delegate;
	id<UITextFieldDelegate> _textFieldDelegate;
	UIScrollView* _scrollView;
	FBPopoverActionSheet* _actionSheet;

}

@property (assign,nonatomic,__weak) id<FBCrowdsourcingHomeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UITextFieldDelegate> textFieldDelegate;                 //@synthesize textFieldDelegate=_textFieldDelegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                      //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) BOOL isCityFieldEnabled;                                          //@synthesize isCityFieldEnabled=_isCityFieldEnabled - In the implementation block
@property (assign,nonatomic) BOOL canEditPlaceName;                                            //@synthesize canEditPlaceName=_canEditPlaceName - In the implementation block
@property (assign,nonatomic) BOOL showUploadProfilePicIcon;                                    //@synthesize showUploadProfilePicIcon=_showUploadProfilePicIcon - In the implementation block
@property (nonatomic,readonly) FBPopoverActionSheet * actionSheet;                             //@synthesize actionSheet=_actionSheet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)_didTapUpdateProfilePhotoOption;
-(void)_didTapRemoveProfilePhotoOption;
-(void)updatePrivacyViewWithPrivacy:(id)arg1 ;
-(void)updateProfilePhoto:(id)arg1 ;
-(void)showSpinnerInPhotoView:(BOOL)arg1 ;
-(FBPopoverActionSheet *)actionSheet;
-(void)showUpdatePhotoActionDialog;
-(void)crowdsourcingHomeInfoSectionViewDidTapOnCityField;
-(void)crowdsourcingHomePhotoHeaderViewDidTapAddPhotoIcon;
-(void)crowdsourcingHomePhotoHeaderViewDidChangeTextField;
-(void)crowdsourcingHomePrivacySectionViewDidTapOnPrivacySelector;
-(void)_updateCityFieldView;
-(BOOL)isCityFieldEnabled;
-(BOOL)canEditPlaceName;
-(BOOL)showUploadProfilePicIcon;
-(void)updateHeaderViewWithPlaceName:(id)arg1 ;
-(void)setIsCityFieldEnabled:(BOOL)arg1 ;
-(void)setCanEditPlaceName:(BOOL)arg1 ;
-(void)updateCityName:(id)arg1 ;
-(void)updateInfoViewWithNeighborhood:(id)arg1 ;
-(void)updateInfoViewWithAddress:(id)arg1 ;
-(void)setShowUploadProfilePicIcon:(BOOL)arg1 ;
-(void)setDelegate:(id<FBCrowdsourcingHomeViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBCrowdsourcingHomeViewDelegate>)delegate;
-(BOOL)becomeFirstResponder;
-(UIScrollView *)scrollView;
-(void)setTextFieldDelegate:(id<UITextFieldDelegate>)arg1 ;
-(id<UITextFieldDelegate>)textFieldDelegate;
@end
