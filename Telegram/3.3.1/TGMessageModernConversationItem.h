//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernConversationItem.h"

#import "NSCopying.h"
#import "TGModernCollectionRelativeBoundsObserver.h"

@class NSArray, NSString, TGMessage, TGMessageViewModel, TGModernViewContext, TGUser;

@interface TGMessageModernConversationItem : TGModernConversationItem <TGModernCollectionRelativeBoundsObserver, NSCopying>
{
    TGMessage *_message;
    TGUser *_author;
    NSArray *_additionalUsers;
    NSArray *_additionalConversations;
    int _additionalDate;
    _Bool _mediaAvailabilityStatus;
    TGMessageViewModel *_viewModel;
    TGModernViewContext *_context;
    int _cachedMessageType;
    _Bool _layoutIsInvalid;
    TGUser *_syntheticAuthor;
}

- (void).cxx_destruct;
- (_Bool)collapseWithItem:(id)arg1 forContainerSize:(struct CGSize)arg2;
- (id)createMessageViewModel:(id)arg1 containerSize:(struct CGSize)arg2;
- (void)_setupMessageAuthor:(id)arg1;
- (id)currentAuthorPeer;
- (id)parseMimeArguments:(id)arg1;
- (void)bindSpecialViewsToContainer:(id)arg1 viewStorage:(id)arg2 atItemPosition:(struct CGPoint)arg3;
- (void)resumeInlineMedia;
- (void)stopInlineMedia;
- (void)updateAnimationsEnabled;
- (void)updateInlineMediaContext;
- (void)updateProgress:(float)arg1 viewStorage:(id)arg2 animated:(_Bool)arg3;
- (void)updateToItem:(id)arg1 viewStorage:(id)arg2 sizeChanged:(_Bool *)arg3;
- (struct CGSize)sizeForContainerSize:(struct CGSize)arg1;
- (id)viewModelForContainerSize:(struct CGSize)arg1;
- (id)viewModel;
- (void)restoreBoundModelViewFramesRecursively:(id)arg1;
- (void)collectBoundModelViewFramesRecursively:(id)arg1 ifPresentInDict:(id)arg2;
- (void)collectBoundModelViewFramesRecursively:(id)arg1;
- (id)referenceViewForImageTransition;
- (struct CGRect)effectiveContentFrame;
- (void)clearHighlights;
- (void)setTemporaryHighlighted:(_Bool)arg1 viewStorage:(id)arg2;
- (void)imageDataInvalidated:(id)arg1;
- (void)updateEditingState:(id)arg1 animationDelay:(double)arg2;
- (void)updateMessageAttributes;
- (void)updateMediaVisibility;
- (void)updateMessage:(id)arg1 viewStorage:(id)arg2 sizeUpdated:(_Bool *)arg3;
- (void)updateSearchText:(_Bool)arg1;
- (void)refreshMetrics;
- (void)updateAssets;
- (void)relativeBoundsUpdated:(id)arg1 bounds:(struct CGRect)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)temporaryMoveToView:(id)arg1;
- (void)moveToCell:(id)arg1;
- (void)unbindCell:(id)arg1;
- (void)bindCell:(id)arg1 viewStorage:(id)arg2;
- (Class)cellClass;
- (id)deepCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessage:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

