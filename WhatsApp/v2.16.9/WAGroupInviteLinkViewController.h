/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <WhatsApp/WAForwardPickerViewControllerDelegate.h>

@class UIImage, NSString, WAWebPageMetadata, WAWebPageReader, UIImageView, UILabel, UIButton, NSArray;

@interface WAGroupInviteLinkViewController : WAViewController <WAForwardPickerViewControllerDelegate> {

	UIImage* _qrCodeImage;
	BOOL _refreshingCode;
	NSString* _jid;
	NSString* _inviteCode;
	NSString* _inviteURL;
	WAWebPageMetadata* _inviteLinkMetadata;
	WAWebPageReader* _webpageReader;
	UIImage* _qrCode;
	UIImageView* _imageViewGroupPicture;
	UILabel* _labelGroupSubject;
	UILabel* _labelInviteURL;
	UILabel* _labelHelperText;
	UIButton* _buttonShareLink;
	UIButton* _buttonCopyLink;
	UIButton* _buttonQRCode;
	UIButton* _buttonRevokeLink;
	UILabel* _labelShareLink;
	UILabel* _labelCopyLink;
	UILabel* _labelQRCode;
	UILabel* _labelRevokeLink;
	NSArray* _separatorHeight;
	NSArray* _buttonSpacing;
	NSArray* _sideMargins;

}

@property (nonatomic,copy) NSString * jid;                                        //@synthesize jid=_jid - In the implementation block
@property (assign,nonatomic) BOOL refreshingCode;                                 //@synthesize refreshingCode=_refreshingCode - In the implementation block
@property (nonatomic,copy) NSString * inviteCode;                                 //@synthesize inviteCode=_inviteCode - In the implementation block
@property (nonatomic,readonly) NSString * inviteURL;                              //@synthesize inviteURL=_inviteURL - In the implementation block
@property (nonatomic,retain) WAWebPageMetadata * inviteLinkMetadata;              //@synthesize inviteLinkMetadata=_inviteLinkMetadata - In the implementation block
@property (nonatomic,retain) WAWebPageReader * webpageReader;                     //@synthesize webpageReader=_webpageReader - In the implementation block
@property (nonatomic,readonly) UIImage * qrCode;                                  //@synthesize qrCode=_qrCode - In the implementation block
@property (nonatomic,retain) UIImageView * imageViewGroupPicture;                 //@synthesize imageViewGroupPicture=_imageViewGroupPicture - In the implementation block
@property (nonatomic,retain) UILabel * labelGroupSubject;                         //@synthesize labelGroupSubject=_labelGroupSubject - In the implementation block
@property (nonatomic,retain) UILabel * labelInviteURL;                            //@synthesize labelInviteURL=_labelInviteURL - In the implementation block
@property (nonatomic,retain) UILabel * labelHelperText;                           //@synthesize labelHelperText=_labelHelperText - In the implementation block
@property (nonatomic,retain) UIButton * buttonShareLink;                          //@synthesize buttonShareLink=_buttonShareLink - In the implementation block
@property (nonatomic,retain) UIButton * buttonCopyLink;                           //@synthesize buttonCopyLink=_buttonCopyLink - In the implementation block
@property (nonatomic,retain) UIButton * buttonQRCode;                             //@synthesize buttonQRCode=_buttonQRCode - In the implementation block
@property (nonatomic,retain) UIButton * buttonRevokeLink;                         //@synthesize buttonRevokeLink=_buttonRevokeLink - In the implementation block
@property (nonatomic,retain) UILabel * labelShareLink;                            //@synthesize labelShareLink=_labelShareLink - In the implementation block
@property (nonatomic,retain) UILabel * labelCopyLink;                             //@synthesize labelCopyLink=_labelCopyLink - In the implementation block
@property (nonatomic,retain) UILabel * labelQRCode;                               //@synthesize labelQRCode=_labelQRCode - In the implementation block
@property (nonatomic,retain) UILabel * labelRevokeLink;                           //@synthesize labelRevokeLink=_labelRevokeLink - In the implementation block
@property (nonatomic,retain) NSArray * separatorHeight;                           //@synthesize separatorHeight=_separatorHeight - In the implementation block
@property (nonatomic,retain) NSArray * buttonSpacing;                             //@synthesize buttonSpacing=_buttonSpacing - In the implementation block
@property (nonatomic,retain) NSArray * sideMargins;                               //@synthesize sideMargins=_sideMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerWithJID:(id)arg1 ;
+(id)title;
+(void)initialize;
-(NSString *)jid;
-(void)setJid:(NSString *)arg1 ;
-(void)reloadFonts;
-(void)wa_fontSizeDidChange;
-(id)confirmationButtonTitleForForwardPicker:(id)arg1 ;
-(id)forwardPicker:(id)arg1 confirmationTextForContactInfo:(id)arg2 ;
-(UIImageView *)imageViewGroupPicture;
-(void)setSeparatorHeight:(NSArray *)arg1 ;
-(UILabel *)labelHelperText;
-(void)setLabelHelperText:(UILabel *)arg1 ;
-(UIButton *)buttonShareLink;
-(NSArray *)buttonSpacing;
-(UILabel *)labelGroupSubject;
-(UILabel *)labelShareLink;
-(UILabel *)labelCopyLink;
-(UILabel *)labelQRCode;
-(UILabel *)labelRevokeLink;
-(UILabel *)labelInviteURL;
-(UIButton *)buttonCopyLink;
-(UIButton *)buttonQRCode;
-(UIButton *)buttonRevokeLink;
-(BOOL)refreshingCode;
-(void)refreshGroupInviteLink;
-(void)setRefreshingCode:(BOOL)arg1 ;
-(void)handleGroupInviteLinkFetchError:(id)arg1 ;
-(NSString *)inviteURL;
-(void)reallyRevokeLink;
-(WAWebPageReader *)webpageReader;
-(void)setWebpageReader:(WAWebPageReader *)arg1 ;
-(void)setInviteLinkMetadata:(WAWebPageMetadata *)arg1 ;
-(BOOL)prepareQRCode;
-(WAWebPageMetadata *)inviteLinkMetadata;
-(void)copyLinkAction:(id)arg1 ;
-(void)revokeLinkAction:(id)arg1 ;
-(void)qrCodeAction:(id)arg1 ;
-(void)shareLinkAction:(id)arg1 ;
-(UIImage *)qrCode;
-(void)setImageViewGroupPicture:(UIImageView *)arg1 ;
-(void)setLabelGroupSubject:(UILabel *)arg1 ;
-(void)setLabelInviteURL:(UILabel *)arg1 ;
-(void)setButtonShareLink:(UIButton *)arg1 ;
-(void)setButtonCopyLink:(UIButton *)arg1 ;
-(void)setButtonQRCode:(UIButton *)arg1 ;
-(void)setButtonRevokeLink:(UIButton *)arg1 ;
-(void)setLabelShareLink:(UILabel *)arg1 ;
-(void)setLabelCopyLink:(UILabel *)arg1 ;
-(void)setLabelQRCode:(UILabel *)arg1 ;
-(void)setLabelRevokeLink:(UILabel *)arg1 ;
-(void)setButtonSpacing:(NSArray *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSArray *)separatorHeight;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
-(void)setSideMargins:(NSArray *)arg1 ;
-(NSArray *)sideMargins;
@end
