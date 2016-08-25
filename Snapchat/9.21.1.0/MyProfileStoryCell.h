//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SCTimedThumbnail, Story, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface MyProfileStoryCell : UITableViewCell
{
    _Bool _animatingHighlight;
    id <MyProfileStoryCellDelegate> _delegate;
    UIActivityIndicatorView *_thumbnailActivityIndicator;
    UIActivityIndicatorView *_saveAndDeleteActivityIndicator;
    UILabel *_captionLabel;
    UIImageView *_loadingThumbnail;
    UILabel *_screenshotCountLabel;
    UIImageView *_screenshotIcon;
    UIButton *_saveButton;
    UIButton *_deleteButton;
    UIButton *_viewersButton;
    Story *_story;
    UILabel *_subLabel;
    SCTimedThumbnail *_thumbnail;
    UILabel *_viewedCountLabel;
    UIImageView *_viewedIcon;
}

@property(nonatomic) _Bool animatingHighlight; // @synthesize animatingHighlight=_animatingHighlight;
@property(retain, nonatomic) UIImageView *viewedIcon; // @synthesize viewedIcon=_viewedIcon;
@property(retain, nonatomic) UILabel *viewedCountLabel; // @synthesize viewedCountLabel=_viewedCountLabel;
@property(retain, nonatomic) SCTimedThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) Story *story; // @synthesize story=_story;
@property(retain, nonatomic) UIButton *viewersButton; // @synthesize viewersButton=_viewersButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UIImageView *screenshotIcon; // @synthesize screenshotIcon=_screenshotIcon;
@property(retain, nonatomic) UILabel *screenshotCountLabel; // @synthesize screenshotCountLabel=_screenshotCountLabel;
@property(retain, nonatomic) UIImageView *loadingThumbnail; // @synthesize loadingThumbnail=_loadingThumbnail;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) UIActivityIndicatorView *saveAndDeleteActivityIndicator; // @synthesize saveAndDeleteActivityIndicator=_saveAndDeleteActivityIndicator;
@property(retain, nonatomic) UIActivityIndicatorView *thumbnailActivityIndicator; // @synthesize thumbnailActivityIndicator=_thumbnailActivityIndicator;
@property(nonatomic) __weak id <MyProfileStoryCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewersPressed;
- (void)deletePressed;
- (void)savePressed;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setScreenshotCountHidden:(_Bool)arg1 viewCountHidden:(_Bool)arg2;
- (void)setCountsDisplayHidden:(_Bool)arg1;
- (void)setThumbnailFromCacheWithStory:(id)arg1;
- (void)updateWithStory:(id)arg1 controlEnabled:(_Bool)arg2;
- (double)getPercent:(id)arg1;
- (void)layoutSubviews;
- (id)thumbnailLayer;
- (id)thumbnailIcon;
- (struct CGRect)thumbnailRect;
- (void)unHighlight:(_Bool)arg1;
- (void)highlight;
- (id)defaultBackgroundColor;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

@end
