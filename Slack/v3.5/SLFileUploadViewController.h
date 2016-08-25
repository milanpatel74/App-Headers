/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol SLKChannelGenerics;
@class NSString, UIImage, UIScrollView, UITextField, UILabel, GCPlaceholderTextView, SLKUser, SLKDependencies;

@interface SLFileUploadViewController : UIViewController <UITextFieldDelegate, UIScrollViewDelegate, UITextViewDelegate> {

	NSString* initialText;
	BOOL didViewOnce;
	BOOL hasImage;
	NSString* _comment;
	UIImage* _image;
	NSString* _imageTitle;
	NSString* _uploadKey;
	/*^block*/id _fileHandlerForOkButton;
	/*^block*/id _fileHandlerForCancelButton;
	id<SLKChannelGenerics> _genericChannel;
	UIScrollView* _scrollView;
	UITextField* _titleTextField;
	UILabel* _channelLabel;
	UILabel* _sharingInLabel;
	GCPlaceholderTextView* _textView;
	double _textViewInitialHeight;
	BOOL* _hasChangedChannel;
	SLKUser* _user;
	SLKDependencies* _dependencies;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UITextField * titleTextField;                              //@synthesize titleTextField=_titleTextField - In the implementation block
@property (nonatomic,retain) UILabel * channelLabel;                                    //@synthesize channelLabel=_channelLabel - In the implementation block
@property (nonatomic,retain) UILabel * sharingInLabel;                                  //@synthesize sharingInLabel=_sharingInLabel - In the implementation block
@property (nonatomic,retain) GCPlaceholderTextView * textView;                          //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) double textViewInitialHeight;                              //@synthesize textViewInitialHeight=_textViewInitialHeight - In the implementation block
@property (assign,nonatomic) BOOL* hasChangedChannel;                                   //@synthesize hasChangedChannel=_hasChangedChannel - In the implementation block
@property (nonatomic,retain) SLKUser * user;                                            //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                     //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,retain) NSString * comment;                                        //@synthesize comment=_comment - In the implementation block
@property (nonatomic,retain) UIImage * image;                                           //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * imageTitle;                                     //@synthesize imageTitle=_imageTitle - In the implementation block
@property (nonatomic,retain) NSString * uploadKey;                                      //@synthesize uploadKey=_uploadKey - In the implementation block
@property (copy) id fileHandlerForOkButton;                                             //@synthesize fileHandlerForOkButton=_fileHandlerForOkButton - In the implementation block
@property (copy) id fileHandlerForCancelButton;                                         //@synthesize fileHandlerForCancelButton=_fileHandlerForCancelButton - In the implementation block
@property (assign,nonatomic,__weak) id<SLKChannelGenerics> genericChannel;              //@synthesize genericChannel=_genericChannel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDependencies:(id)arg1 ;
-(id<SLKChannelGenerics>)genericChannel;
-(void)configureView;
-(void)setGenericChannel:(id<SLKChannelGenerics>)arg1 ;
-(void)configureNavigationBar;
-(UITextField *)titleTextField;
-(NSString *)imageTitle;
-(void)registerKeyboardNotifications;
-(void)setTextViewInitialHeight:(double)arg1 ;
-(void)updateShareLabel;
-(UILabel *)sharingInLabel;
-(void)openIMForUser:(id)arg1 ;
-(void)cancelChanges;
-(void)acceptChanges;
-(void)didTapImageView:(id)arg1 ;
-(void)setSharingInLabel:(UILabel *)arg1 ;
-(void)setChannelLabel:(UILabel *)arg1 ;
-(void)showChannelSelection;
-(id)createBorderView:(double)arg1 ;
-(void)handleChannelSelection:(id)arg1 ;
-(void)setHasChangedChannel:(BOOL*)arg1 ;
-(void)setImageTitle:(NSString *)arg1 ;
-(BOOL*)hasChangedChannel;
-(id)fileHandlerForOkButton;
-(NSString *)uploadKey;
-(id)fileHandlerForCancelButton;
-(void)unregisterKeyboardNotifications;
-(double)textViewInitialHeight;
-(void)setUploadKey:(NSString *)arg1 ;
-(void)setFileHandlerForOkButton:(id)arg1 ;
-(void)setFileHandlerForCancelButton:(id)arg1 ;
-(void)setTitleTextField:(UITextField *)arg1 ;
-(SLKDependencies *)dependencies;
-(SLKUser *)user;
-(void)setUser:(SLKUser *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(UIImage *)image;
-(void)setTextView:(GCPlaceholderTextView *)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(GCPlaceholderTextView *)textView;
-(UILabel *)channelLabel;
-(NSString *)comment;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(void)setUserObject:(id)arg1 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
@end
