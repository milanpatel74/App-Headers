//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TGNotificationForwardHeaderView, TGNotificationReplyHeaderView, UIImageView, UILabel;

@interface TGNotificationPreviewView : UIView
{
    long long _conversationId;
    int _messageId;
    id _activeRequestMediaId;
    UIImageView *_lockIcon;
    UILabel *_titleLabel;
    UIImageView *_mediaIcon;
    UILabel *_textLabel;
    TGNotificationReplyHeaderView *_replyHeader;
    TGNotificationForwardHeaderView *_forwardHeader;
    double _headerHeight;
    double _textHeight;
    double _collapsedTextHeight;
    struct CGSize _currentContainerSize;
    double _titleStartPos;
    double _titleEndPos;
    double _textStartPos;
    double _textEndPos;
    double _expandProgress;
    _Bool _hasExtraContent;
    _Bool _isPanable;
    _Bool _isIdle;
    CDUnknownBlockType _requestMedia;
    CDUnknownBlockType _cancelMedia;
    CDUnknownBlockType _playMedia;
    CDUnknownBlockType _mediaContext;
}

@property(readonly, nonatomic) _Bool isIdle; // @synthesize isIdle=_isIdle;
@property(readonly, nonatomic) _Bool isPanable; // @synthesize isPanable=_isPanable;
@property(copy, nonatomic) CDUnknownBlockType mediaContext; // @synthesize mediaContext=_mediaContext;
@property(copy, nonatomic) CDUnknownBlockType playMedia; // @synthesize playMedia=_playMedia;
@property(copy, nonatomic) CDUnknownBlockType cancelMedia; // @synthesize cancelMedia=_cancelMedia;
@property(copy, nonatomic) CDUnknownBlockType requestMedia; // @synthesize requestMedia=_requestMedia;
@property(readonly, nonatomic) id activeRequestMediaId; // @synthesize activeRequestMediaId=_activeRequestMediaId;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutHeaders;
- (void)_layoutText;
- (double)expandedHeightForContainerSize:(struct CGSize)arg1;
- (double)maxContentHeight;
- (void)updateInlineMediaContext;
- (void)updateProgress:(_Bool)arg1 progress:(float)arg2 animated:(_Bool)arg3;
- (void)updateMediaAvailability:(_Bool)arg1;
- (void)imageDataInvalidated:(id)arg1;
- (_Bool)isPanableAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool isExpandable;
- (void)_updateExpandProgress:(double)arg1 hideText:(_Bool)arg2;
- (void)setExpandProgress:(double)arg1;
- (void)setIcon:(id)arg1 text:(id)arg2;
- (id)initWithMessage:(id)arg1 conversation:(id)arg2 peers:(id)arg3;

@end
