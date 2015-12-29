//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernConversationCompanion.h"

#import "TGAddToExistingContactControllerDelegate.h"
#import "TGCreateContactControllerDelegate.h"

@class NSArray, NSString, SMetaDisposable, TGProgressWindow;

@interface TGGenericModernConversationCompanion : TGModernConversationCompanion <TGCreateContactControllerDelegate, TGAddToExistingContactControllerDelegate>
{
    long long _conversationId;
    long long _attachedConversationId;
    long long _accessHash;
    _Bool _everyMessageNeedsAuthor;
    _Bool _manualMessageManagement;
    int _preferredInitialPositionedMessageId;
    _Bool _initialMayHaveUnreadMessages;
    int _initialUnreadCount;
    NSArray *_initialForwardMessagePayload;
    NSArray *_initialAttachMessagePayload;
    NSArray *_initialSendMessagePayload;
    NSArray *_initialSendFilePayload;
    _Bool _moreMessagesAvailableAbove;
    _Bool _loadingMoreMessagesAbove;
    _Bool _moreMessagesAvailableBelow;
    _Bool _loadingMoreMessagesBelow;
    _Bool _needsToReadHistory;
    NSString *_conversationIdPathComponent;
    struct map<int, float, std::less<int>, std::allocator<std::pair<const int, float>>> _messageUploadProgress;
    set_8fb532d1 _processingDownloadMids;
    struct _opaque_pthread_mutex_t _TG_SYNCHRONIZED__processingDownloadMids;
    unsigned long long _layer;
    SMetaDisposable *_stickerPacksDisposable;
    TGProgressWindow *_progressWindow;
    int _loadingMessageForSearch;
    int _sourceMessageForSearch;
    _Bool _animatedTransitionInSearch;
    id <SDisposable> _botReplyMarkupDisposable;
}

+ (struct CGSize)preferredInlineThumbnailSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldFastScrollDown;
- (void)scheduleReadHistory;
- (long long)requestAccessHash;
- (long long)requestPeerId;
- (void)_replaceMessages:(id)arg1 atMessageId:(int)arg2 expandFrom:(int)arg3 jump:(_Bool)arg4 top:(_Bool)arg5 messageIdForVisibleHoleDirection:(int)arg6 scrollBackMessageId:(int)arg7 animated:(_Bool)arg8;
- (void)navigateToMessageSearch;
- (id)hashtagListForHashtag:(id)arg1;
- (id)acquireLocationPickingActivityHolder;
- (id)acquireAudioRecordingActivityHolder;
- (void)updateMediaAccessTimeForMessageId:(int)arg1;
- (void)_downloadMediaInMessage:(id)arg1 highPriority:(_Bool)arg2;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)_updateProgressForItemsInIndexSet:(id)arg1 animated:(_Bool)arg2;
- (void)_updateItemProgress:(int)arg1 animated:(_Bool)arg2;
- (void)actorMessageReceived:(id)arg1 messageType:(id)arg2 message:(id)arg3;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (_Bool)_tryToScrollToMessageId:(int)arg1 scrollBackMessageId:(int)arg2 animated:(_Bool)arg3;
- (void)navigateToMessageId:(int)arg1 scrollBackMessageId:(int)arg2 animated:(_Bool)arg3;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)_unloadMessages:(_Bool)arg1;
- (void)unloadMessagesBelow;
- (void)unloadMessagesAbove;
- (void)loadMoreMessagesBelow;
- (void)loadMoreMessagesAbove;
- (void)controllerWantsToApplyLocalization:(id)arg1;
- (void)controllerWantsToAddContactToExisting:(int)arg1 phoneNumber:(id)arg2;
- (void)controllerWantsToCreateContact:(int)arg1 firstName:(id)arg2 lastName:(id)arg3 phoneNumber:(id)arg4;
- (void)controllerCanRegroupUnreadIncomingMessages;
- (void)controllerCanReadHistoryUpdated;
- (void)_markIncomingMessagesAsReadSilent;
- (void)controllerRequestedNavigationToConversationWithUser:(int)arg1;
- (void)controllerDeletedMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)systemClearedConversation;
- (void)controllerClearedConversation;
- (void)_performFastScrollDown:(_Bool)arg1;
- (id)_sendPreparedMessages:(id)arg1 automaticallyAddToList:(_Bool)arg2 withIntent:(int)arg3;
- (id)_createPreparedMessagesFromFiles:(id)arg1 asReplyToMessageId:(int)arg2;
- (_Bool)isFileImage:(id)arg1 mimeType:(id)arg2 outAnimated:(_Bool *)arg3;
- (id)_createPreparedForwardMessagesFromMessages:(id)arg1;
- (id)_createPreparedMessagesFromMessages:(id)arg1 copyAssetsData:(_Bool)arg2;
- (void)controllerWantsToForwardMessages:(id)arg1;
- (void)controllerWantsToResendMessages:(id)arg1;
- (void)controllerWantsToSendContact:(id)arg1 asReplyToMessageId:(int)arg2;
- (void)controllerWantsToSendRemoteVideoWithMedia:(id)arg1 asReplyToMessageId:(int)arg2;
- (void)controllerWantsToSendLocalAudioWithDataItem:(id)arg1 duration:(double)arg2 liveData:(id)arg3 asReplyToMessageId:(int)arg4;
- (void)controllerWantsToSendCloudDocumentsWithDescriptions:(id)arg1 asReplyToMessageId:(int)arg2;
- (void)controllerWantsToSendRemoteDocument:(id)arg1 asReplyToMessageId:(int)arg2;
- (void)controllerWantsToSendDocumentsWithDescriptions:(id)arg1 asReplyToMessageId:(int)arg2;
- (void)controllerWantsToSendDocumentWithTempFileUrl:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 asReplyToMessageId:(int)arg4;
- (id)serverCachedAssetWithId:(id)arg1;
- (void)controllerWantsToSendLocalVideoWithTempFilePath:(id)arg1 fileSize:(int)arg2 previewImage:(id)arg3 duration:(double)arg4 dimensions:(struct CGSize)arg5 caption:(id)arg6 assetUrl:(id)arg7 liveUploadData:(id)arg8 asReplyToMessageId:(int)arg9;
- (void)controllerWantsToSendImagesWithDescriptions:(id)arg1 asReplyToMessageId:(int)arg2;
- (void)_addRecentHashtagsFromText:(id)arg1;
- (id)documentDescriptionFromFileAtTempUrl:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3;
- (id)documentDescriptionFromInternalSearchResult:(id)arg1;
- (id)imageDescriptionFromInternalSearchImageResult:(id)arg1 caption:(id)arg2;
- (id)documentDescriptionFromGoogleDriveItem:(id)arg1;
- (id)documentDescriptionFromDropboxItem:(id)arg1;
- (id)documentDescriptionFromICloudDriveItem:(id)arg1;
- (id)documentDescriptionFromGiphySearchResult:(id)arg1;
- (id)imageDescriptionFromBingSearchResult:(id)arg1 caption:(id)arg2;
- (id)imageDescriptionFromImage:(id)arg1 caption:(id)arg2 optionalAssetUrl:(id)arg3;
- (id)fileUrlForDocumentMedia:(id)arg1;
- (void)controllerWantsToSendMapWithLatitude:(double)arg1 longitude:(double)arg2 venue:(id)arg3 asReplyToMessageId:(int)arg4;
- (void)controllerWantsToSendTextMessage:(id)arg1 asReplyToMessageId:(int)arg2 withAttachedMessages:(id)arg3 disableLinkPreviews:(_Bool)arg4;
- (void)_updateImportantMediaStatusDataInplace:(id)arg1;
- (id)_updateMediaStatusData:(id)arg1;
- (void)_updateMessageItemsWithData:(id)arg1;
- (void)subscribeToUpdates;
- (id)_sendMessagePathPrefix;
- (id)_sendMessagePathForMessageId:(int)arg1;
- (id)_conversationIdPathComponent;
- (void)controllerDidChangeInputText:(id)arg1;
- (void)_updateNetworkState:(id)arg1;
- (void)updateControllerInputText:(id)arg1;
- (void)_controllerDidAppear:(_Bool)arg1;
- (void)_controllerWillAppearAnimated:(_Bool)arg1 firstTime:(_Bool)arg2;
- (void)loadInitialState:(_Bool)arg1;
- (void)loadInitialState;
- (void)standaloneForwardMessages:(id)arg1;
- (void)_addMediaRecentsFromMessages:(id)arg1;
- (void)shareVCard;
- (void)standaloneSendFiles:(id)arg1;
- (void)standaloneSendMessages:(id)arg1;
- (_Bool)_messagesNeedRandomId;
- (void)_setupOutgoingMessage:(id)arg1;
- (id)_optionsForMessageActions;
- (void)setLayer:(unsigned long long)arg1;
- (unsigned long long)layer;
- (int)messageLifetime;
- (_Bool)_shouldDisplayProcessUnreadCount;
- (_Bool)_shouldCacheRemoteAssetUris;
- (_Bool)imageDownloadsShouldAutosavePhotos;
- (long long)messageAuthorPeerId;
- (long long)conversationId;
- (void)setInitialMessagePayloadWithForwardMessages:(id)arg1 sendMessages:(id)arg2 sendFiles:(id)arg3;
- (void)setPreferredInitialMessagePositioning:(int)arg1;
- (void)setOthersUnreadCount:(int)arg1;
- (void)dealloc;
- (id)initWithConversationId:(long long)arg1 mayHaveUnreadMessages:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

