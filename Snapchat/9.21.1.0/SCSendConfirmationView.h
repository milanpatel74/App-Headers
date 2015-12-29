//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, SCSendArrow, UILabel, UIScrollView, UITableView;

@interface SCSendConfirmationView : UIView
{
    SCSendArrow *_sendArrow;
    UILabel *_hintLabel;
    UILabel *_recipientsLabel;
    UIScrollView *_recipientsScrollView;
    UITableView *_tableView;
    NSArray *_labelInfos;
    _Bool _addToMyStory;
    _Bool _addToMyGallery;
    _Bool _quickSend;
    id <SCSendConfirmationViewControllerDelegate> _delegate;
    NSArray *_recipients;
    NSArray *_officialStoriesSelected;
    NSArray *_sharedStoriesSelected;
}

@property(copy, nonatomic) NSArray *sharedStoriesSelected; // @synthesize sharedStoriesSelected=_sharedStoriesSelected;
@property(copy, nonatomic) NSArray *officialStoriesSelected; // @synthesize officialStoriesSelected=_officialStoriesSelected;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) _Bool quickSend; // @synthesize quickSend=_quickSend;
@property(nonatomic) _Bool addToMyGallery; // @synthesize addToMyGallery=_addToMyGallery;
@property(nonatomic) _Bool addToMyStory; // @synthesize addToMyStory=_addToMyStory;
@property(nonatomic) __weak id <SCSendConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_addString:(id)arg1 toRecipientLabel:(id)arg2 labelInfos:(id)arg3 type:(long long)arg4 originalIndex:(long long)arg5 start:(double *)arg6;
- (void)_updateRecipientsAnimated:(_Bool)arg1;
- (void)setSendButtonEnabled:(_Bool)arg1;
- (void)_recipientsScrollViewTapped:(id)arg1;
- (void)_sendPressed;
- (void)_setupBackground;
- (void)_setupHintLabel;
- (void)showTapToAddLabelBriefly;
- (struct CGRect)recipientsLabelFrame;
- (struct CGRect)recipientsScrollViewFrame;
- (struct CGRect)sendArrowFrame;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

