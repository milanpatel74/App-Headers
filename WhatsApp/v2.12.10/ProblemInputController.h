/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>
#import <WhatsApp/WAImageAttachmentContainerViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <WhatsApp/WAFAQBrowserViewControllerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol OS_dispatch_group, ProblemInputControllerDelegate;
@class UITableViewCell, UITextView, WADoneWithSpinnerBarButtonItem, NSObject, NSString, WAImageAttachmentContainerView, UIBarButtonItem, WAHTTPFetcher, NSArray;

@interface ProblemInputController : WATableViewController <WAImageAttachmentContainerViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIGestureRecognizerDelegate, WAFAQBrowserViewControllerDelegate, UITextViewDelegate> {

	UITableViewCell* _textViewCell;
	UITextView* _textView;
	WADoneWithSpinnerBarButtonItem* _doneButton;
	NSObject*<OS_dispatch_group> _logsGatheringDispatchGroup;
	NSString* _gzippedLogs;
	double _keyboardHeight;
	WAImageAttachmentContainerView* _imageAttachmentContainer;
	UIBarButtonItem* _dismissKeyboardBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	BOOL _keyboardHidden;
	WAHTTPFetcher* _searchFetcher;
	NSArray* _imagesToSend;
	id<ProblemInputControllerDelegate> _delegate;
	NSString* _initialText;
	unsigned long long _numberOfFAQSearchResultsReturned;
	unsigned long long _numberOfFAQSearchResultsOpened;

}

@property (assign,nonatomic,__weak) id<ProblemInputControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * initialText;                                               //@synthesize initialText=_initialText - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFAQSearchResultsReturned;              //@synthesize numberOfFAQSearchResultsReturned=_numberOfFAQSearchResultsReturned - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFAQSearchResultsOpened;                //@synthesize numberOfFAQSearchResultsOpened=_numberOfFAQSearchResultsOpened - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wa_fontSizeDidChange;
-(void)wa_applicationDidEnterBackground;
-(void)doneAction:(id)arg1 ;
-(void)viewTapped:(id)arg1 ;
-(void)dismissKeyboard:(id)arg1 ;
-(BOOL)userHasEnteredSufficientText;
-(void)proceedToEmail;
-(void)searchFAQ:(id)arg1 checkpoint:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelPendingSearch;
-(void)imageAttachmentContainerViewDidRequestAddImage:(id)arg1 ;
-(void)imageAttachmentContainerViewDidDeleteImage:(id)arg1 ;
-(void)faqBrowserViewControllerShouldProceedToEmail:(id)arg1 ;
-(unsigned long long)numberOfFAQSearchResultsReturned;
-(unsigned long long)numberOfFAQSearchResultsOpened;
-(void)cancelAction:(id)arg1 ;
-(void)setDelegate:(id<ProblemInputControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<ProblemInputControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setInitialText:(NSString *)arg1 ;
-(NSString *)initialText;
-(void)updateButtonState;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

