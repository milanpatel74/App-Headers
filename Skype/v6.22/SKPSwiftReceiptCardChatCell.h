/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPSwiftCardChatCell.h>

@interface SKPSwiftReceiptCardChatCell : SKPSwiftCardChatCell
+(id)prototypeCell;
-(id)receiptCardFactsContainerViewKeyWithCardIndex:(unsigned long long)arg1 ;
-(UIEdgeInsets)factsContainerEdge;
-(UIEdgeInsets)itemsContainerEdge;
-(id)receiptSummaryWithIdentifier:(id)arg1 nameKey:(id)arg2 valueKey:(id)arg3 ;
-(void)updateItems:(id)arg1 ;
-(void)updateReceiptSummary:(id)arg1 nameFieldKey:(id)arg2 factNameValue:(id)arg3 valueFieldKey:(id)arg4 factValueValue:(id)arg5 ;
-(void)updateFacts:(id)arg1 cardIndex:(unsigned long long)arg2 ;
-(id)factNameWithIdentifier:(id)arg1 ;
-(id)factValueWithIdentifier:(id)arg1 ;
-(id)receiptCardItemViewKeyWithItemIndex:(unsigned long long)arg1 ;
-(void)updateItem:(id)arg1 key:(id)arg2 ;
-(id)receiptCardItemSummaryViewKeyWithItemIdentifier:(id)arg1 ;
-(UIEdgeInsets)summaryContainerEdge;
-(id)receiptCardItemTitleViewKeyWithItemIdentifier:(id)arg1 ;
-(id)itemTitleLabelWithIdentifier:(id)arg1 ;
-(id)receiptCardItemPriceViewKeyWithItemIdentifier:(id)arg1 ;
-(id)itemPriceWithIdentifier:(id)arg1 ;
-(id)receiptCardItemSubtitleViewKeyWithItemIdentifier:(id)arg1 ;
-(id)itemSubtitleLabelWithIdentifier:(id)arg1 ;
-(id)receiptCardItemTextViewKeyWithItemIdentifier:(id)arg1 ;
-(id)itemTextWithIdentifier:(id)arg1 ;
-(id)receiptCardItemImageViewKeyWithItemIdentifier:(id)arg1 ;
-(id)receiptCardFactViewKeyWithCardIndex:(unsigned long long)arg1 factIndex:(unsigned long long)arg2 ;
-(id)receiptCardFactNameViewKeyWithFactKey:(id)arg1 ;
-(id)receiptCardFactValueViewKeyWithFactKey:(id)arg1 ;
-(id)factWithIdentifier:(id)arg1 nameKey:(id)arg2 valueKey:(id)arg3 ;
-(id)cardsBackgroundColor;
-(double)cardsBorderWidth;
-(id)cardWithIndex:(unsigned long long)arg1 ;
-(void)updateCard:(id)arg1 ;
-(id)itemWithIdentifier:(id)arg1 ;
@end
