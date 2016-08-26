/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGModernMediaListItem.h>
#import <Telegram/TGWebSearchListItem.h>

@class TGMediaSelectionContext, TGWebSearchInternalGifResult, NSString;

@interface TGWebSearchInternalGifItem : NSObject <TGModernMediaListItem, TGWebSearchListItem> {

	TGMediaSelectionContext* selectionContext;
	TGWebSearchInternalGifResult* _webSearchResult;

}

@property (nonatomic,readonly) TGWebSearchInternalGifResult * webSearchResult;              //@synthesize webSearchResult=_webSearchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TGMediaSelectionContext * selectionContext; 
-(id)selectableMediaItem;
-(TGMediaSelectionContext *)selectionContext;
-(void)setSelectionContext:(TGMediaSelectionContext *)arg1 ;
-(id)initWithSearchResult:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)viewClass;
-(TGWebSearchInternalGifResult *)webSearchResult;
@end
