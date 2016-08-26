/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CreativeEditingToolsLog : NSObject {

	BOOL _hasDoodles;
	BOOL _isCropped;
	BOOL _isRotated;
	BOOL _deleted;
	BOOL _isPublished;
	unsigned long long _stickerFlowEntries;
	unsigned long long _stickerCount;
	unsigned long long _textFlowEntries;
	unsigned long long _textCount;
	unsigned long long _doodleFlowEntries;
	unsigned long long _cropFlowEntries;
	unsigned long long _filterSwipeCount;
	unsigned long long _gvFilterSelectionCount;
	NSString* _filterName;
	NSString* _mediaID;
	unsigned long long _galleryViewEditingEntries;
	unsigned long long _galleryViewEditingEntriesFromCancellationSheet;

}

@property (assign,nonatomic) unsigned long long stickerFlowEntries;                                          //@synthesize stickerFlowEntries=_stickerFlowEntries - In the implementation block
@property (assign,nonatomic) unsigned long long stickerCount;                                                //@synthesize stickerCount=_stickerCount - In the implementation block
@property (assign,nonatomic) unsigned long long textFlowEntries;                                             //@synthesize textFlowEntries=_textFlowEntries - In the implementation block
@property (assign,nonatomic) unsigned long long textCount;                                                   //@synthesize textCount=_textCount - In the implementation block
@property (assign,nonatomic) unsigned long long doodleFlowEntries;                                           //@synthesize doodleFlowEntries=_doodleFlowEntries - In the implementation block
@property (assign,nonatomic) BOOL hasDoodles;                                                                //@synthesize hasDoodles=_hasDoodles - In the implementation block
@property (assign,nonatomic) unsigned long long cropFlowEntries;                                             //@synthesize cropFlowEntries=_cropFlowEntries - In the implementation block
@property (assign,nonatomic) BOOL isCropped;                                                                 //@synthesize isCropped=_isCropped - In the implementation block
@property (assign,nonatomic) BOOL isRotated;                                                                 //@synthesize isRotated=_isRotated - In the implementation block
@property (assign,nonatomic) unsigned long long filterSwipeCount;                                            //@synthesize filterSwipeCount=_filterSwipeCount - In the implementation block
@property (assign,nonatomic) unsigned long long gvFilterSelectionCount;                                      //@synthesize gvFilterSelectionCount=_gvFilterSelectionCount - In the implementation block
@property (nonatomic,copy) NSString * filterName;                                                            //@synthesize filterName=_filterName - In the implementation block
@property (assign,nonatomic) BOOL deleted;                                                                   //@synthesize deleted=_deleted - In the implementation block
@property (assign,nonatomic) BOOL isPublished;                                                               //@synthesize isPublished=_isPublished - In the implementation block
@property (nonatomic,copy) NSString * mediaID;                                                               //@synthesize mediaID=_mediaID - In the implementation block
@property (assign,nonatomic) unsigned long long galleryViewEditingEntries;                                   //@synthesize galleryViewEditingEntries=_galleryViewEditingEntries - In the implementation block
@property (assign,nonatomic) unsigned long long galleryViewEditingEntriesFromCancellationSheet;              //@synthesize galleryViewEditingEntriesFromCancellationSheet=_galleryViewEditingEntriesFromCancellationSheet - In the implementation block
-(NSString *)filterName;
-(BOOL)hasDoodles;
-(NSString *)mediaID;
-(unsigned long long)stickerFlowEntries;
-(void)setStickerFlowEntries:(unsigned long long)arg1 ;
-(unsigned long long)stickerCount;
-(void)setStickerCount:(unsigned long long)arg1 ;
-(unsigned long long)textFlowEntries;
-(void)setTextFlowEntries:(unsigned long long)arg1 ;
-(unsigned long long)textCount;
-(void)setTextCount:(unsigned long long)arg1 ;
-(unsigned long long)doodleFlowEntries;
-(void)setDoodleFlowEntries:(unsigned long long)arg1 ;
-(void)setHasDoodles:(BOOL)arg1 ;
-(unsigned long long)cropFlowEntries;
-(void)setCropFlowEntries:(unsigned long long)arg1 ;
-(void)setIsCropped:(BOOL)arg1 ;
-(unsigned long long)filterSwipeCount;
-(void)setFilterSwipeCount:(unsigned long long)arg1 ;
-(unsigned long long)gvFilterSelectionCount;
-(void)setGvFilterSelectionCount:(unsigned long long)arg1 ;
-(void)setMediaID:(NSString *)arg1 ;
-(unsigned long long)galleryViewEditingEntries;
-(void)setGalleryViewEditingEntries:(unsigned long long)arg1 ;
-(unsigned long long)galleryViewEditingEntriesFromCancellationSheet;
-(void)setGalleryViewEditingEntriesFromCancellationSheet:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isRotated;
-(void)setFilterName:(NSString *)arg1 ;
-(BOOL)isPublished;
-(void)setIsPublished:(BOOL)arg1 ;
-(void)setIsRotated:(BOOL)arg1 ;
-(BOOL)deleted;
-(BOOL)isCropped;
-(void)setDeleted:(BOOL)arg1 ;
@end
