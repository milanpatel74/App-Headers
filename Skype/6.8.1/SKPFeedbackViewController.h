//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSMutableArray, NSString, SKPFeedbackView;

@interface SKPFeedbackViewController : SKPViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _submitting;
    NSString *_prefilledTitle;
    NSString *_prefilledDescription;
    SKPFeedbackView *_feedbackView;
    NSMutableArray *_allSortedCoreLibLogs;
    NSMutableArray *_mediaStackLogs;
    NSMutableArray *_screenshotFiles;
}

@property(nonatomic) _Bool submitting; // @synthesize submitting=_submitting;
@property(retain, nonatomic) NSMutableArray *screenshotFiles; // @synthesize screenshotFiles=_screenshotFiles;
@property(retain, nonatomic) NSMutableArray *mediaStackLogs; // @synthesize mediaStackLogs=_mediaStackLogs;
@property(retain, nonatomic) NSMutableArray *allSortedCoreLibLogs; // @synthesize allSortedCoreLibLogs=_allSortedCoreLibLogs;
@property(retain, nonatomic) SKPFeedbackView *feedbackView; // @synthesize feedbackView=_feedbackView;
@property(retain, nonatomic) NSString *prefilledDescription; // @synthesize prefilledDescription=_prefilledDescription;
@property(retain, nonatomic) NSString *prefilledTitle; // @synthesize prefilledTitle=_prefilledTitle;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)registerReusableCellForCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (long long)defaultNumberOfLogsToUpload;
- (id)findCreationDateString:(int)arg1;
- (id)humanReadableLogSizeString:(id)arg1;
- (id)calculateFileSize:(long long)arg1 inCollection:(id)arg2;
- (int)numberOfMediaStackLogsSelected;
- (int)numberOfLogFilesSelected;
- (id)commentToSubmit:(id)arg1;
- (id)language;
- (id)aliasToSubmit;
- (id)otherParticipants;
- (id)titleToSubmit;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)URLOfTemporaryCopyForItemAtURL:(id)arg1;
- (void)uploadFiles:(id)arg1 numberOfLogs:(long long)arg2 includeMediaStackLogs:(_Bool)arg3;
- (void)prepareMediaStackLogs;
- (void)prepareSkyLibLogs;
- (id)postFeedbackURLRequest:(id)arg1;
- (void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getClientFeedbackRequestLink:(id)arg1;
- (void)sendFeedbackRequestToParticipants:(id)arg1;
- (void)submitFeedback;
- (void)didTapAddScreenshot;
- (void)didChangeNumberOfLogsToUpload:(id)arg1;
- (void)didTapCancel;
- (_Bool)validateFieldContentLength:(id)arg1 content:(id)arg2 fieldTitle:(id)arg3;
- (void)displayPrivacyNotice:(long long)arg1 maxNumberOfMediaStackLogs:(long long)arg2 acceptBlock:(CDUnknownBlockType)arg3;
- (void)didTapDone;
- (void)checkConnectivity:(CDUnknownBlockType)arg1 declineBlock:(CDUnknownBlockType)arg2;
- (void)unobserveKeyboardNotifications;
- (void)observeKeyboardNotifications;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showAlertMessageWithTitle:(id)arg1 message:(id)arg2 buttonText:(id)arg3;
- (void)dismissKeyboard;
- (void)updateMediaStackLogView;
- (void)updateCoreLibLogInfoView;
- (void)updateAlias;
- (void)prefillDescription;
- (void)prefillTitle;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

