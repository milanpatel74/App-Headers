/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WATableViewController.h>
#import <WhatsApp/WebImagePickerDelegate.h>
#import <WhatsApp/WASinglePhotoPickerControllerDelegate.h>

@protocol WANewGroupViewControllerDelegate;
@class UIImage, UITableViewCell, UITextField, UILabel, UIView, UIImageView, UIButton, NSString;

@interface WANewGroupViewController : WATableViewController <WebImagePickerDelegate, WASinglePhotoPickerControllerDelegate> {

	UIImage* _groupPicture;
	id<WANewGroupViewControllerDelegate> _delegate;
	UITableViewCell* _cellGroupSubject;
	UITextField* _textFieldSubject;
	UILabel* _labelCharCount;
	UIView* _viewTableHeader;
	UILabel* _labelHelperText;
	UIView* _viewAddPhoto;
	UIImageView* _imageGroupPicture;
	UIButton* _buttonAddPhoto;
	UIButton* _buttonEditPhoto;

}

@property (assign,nonatomic,__weak) id<WANewGroupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UITableViewCell * cellGroupSubject;                                //@synthesize cellGroupSubject=_cellGroupSubject - In the implementation block
@property (nonatomic,retain) UITextField * textFieldSubject;                                    //@synthesize textFieldSubject=_textFieldSubject - In the implementation block
@property (nonatomic,retain) UILabel * labelCharCount;                                          //@synthesize labelCharCount=_labelCharCount - In the implementation block
@property (nonatomic,retain) UIView * viewTableHeader;                                          //@synthesize viewTableHeader=_viewTableHeader - In the implementation block
@property (nonatomic,retain) UILabel * labelHelperText;                                         //@synthesize labelHelperText=_labelHelperText - In the implementation block
@property (nonatomic,retain) UIView * viewAddPhoto;                                             //@synthesize viewAddPhoto=_viewAddPhoto - In the implementation block
@property (nonatomic,retain) UIImageView * imageGroupPicture;                                   //@synthesize imageGroupPicture=_imageGroupPicture - In the implementation block
@property (nonatomic,retain) UIButton * buttonAddPhoto;                                         //@synthesize buttonAddPhoto=_buttonAddPhoto - In the implementation block
@property (nonatomic,retain) UIButton * buttonEditPhoto;                                        //@synthesize buttonEditPhoto=_buttonEditPhoto - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wa_fontSizeDidChange;
-(UIView *)viewTableHeader;
-(void)setViewTableHeader:(UIView *)arg1 ;
-(void)textFieldValueChanged:(id)arg1 ;
-(void)nextAction:(id)arg1 ;
-(void)showImagePickerForSourceType:(long long)arg1 ;
-(void)showImageSearchController;
-(void)reallyShowImagePickerForSourceType:(long long)arg1 ;
-(void)singlePhotoPickerControllerDidCancel:(id)arg1 ;
-(void)singlePhotoPickerController:(id)arg1 didFinishWithImage:(id)arg2 ;
-(void)webImagePicker:(id)arg1 didSelectImage:(id)arg2 ;
-(void)webImagePickerDidCancel:(id)arg1 ;
-(void)updateCharCount;
-(void)editPhotoAction:(id)arg1 ;
-(UIButton *)buttonEditPhoto;
-(UIButton *)buttonAddPhoto;
-(void)setButtonAddPhoto:(UIButton *)arg1 ;
-(void)setButtonEditPhoto:(UIButton *)arg1 ;
-(void)setLabelCharCount:(UILabel *)arg1 ;
-(UILabel *)labelCharCount;
-(UITextField *)textFieldSubject;
-(UILabel *)labelHelperText;
-(UIView *)viewAddPhoto;
-(void)setImageGroupPicture:(UIImageView *)arg1 ;
-(UIImageView *)imageGroupPicture;
-(void)layoutTableHeader;
-(void)updateGroupPicture;
-(UITableViewCell *)cellGroupSubject;
-(void)setCellGroupSubject:(UITableViewCell *)arg1 ;
-(void)setTextFieldSubject:(UITextField *)arg1 ;
-(void)setLabelHelperText:(UILabel *)arg1 ;
-(void)setViewAddPhoto:(UIView *)arg1 ;
-(void)cancelAction:(id)arg1 ;
-(void)setDelegate:(id<WANewGroupViewControllerDelegate>)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<WANewGroupViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

