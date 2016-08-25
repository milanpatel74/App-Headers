/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/SellingDetailController_TableView.h>

@class DisplayCell, SellingConditionFileParser, UIView, UITextView;

@interface SellingDetailController_Condition : SellingDetailController_TableView {

	DisplayCell* _conditionDescriptionCell;
	SellingConditionFileParser* _parser;
	UIView* _conditionDefinitionView;
	UITextView* _conditionDefinitionTextView;

}

@property (nonatomic,retain) DisplayCell * conditionDescriptionCell;                //@synthesize conditionDescriptionCell=_conditionDescriptionCell - In the implementation block
@property (nonatomic,retain) SellingConditionFileParser * parser;                   //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) UIView * conditionDefinitionView;                      //@synthesize conditionDefinitionView=_conditionDefinitionView - In the implementation block
@property (nonatomic,retain) UITextView * conditionDefinitionTextView;              //@synthesize conditionDefinitionTextView=_conditionDefinitionTextView - In the implementation block
-(void)setupTableCells;
-(void)resignCurrentResponder;
-(id)conditionDescriptionText;
-(void)setConditionDescriptionCell:(DisplayCell *)arg1 ;
-(void)markCell:(id)arg1 selected:(BOOL)arg2 ;
-(void)updateConditionDescriptionView;
-(void)setupConditionDefinitionView;
-(CGRect)calcDoneButtonFrame:(BOOL)arg1 ;
-(double)calculateConditionDefinitionTextViewHeight;
-(void)saveToListing;
-(void)setupConditionDefinitionView:(id)arg1 ;
-(DisplayCell *)conditionDescriptionCell;
-(UIView *)conditionDefinitionView;
-(void)setConditionDefinitionView:(UIView *)arg1 ;
-(UITextView *)conditionDefinitionTextView;
-(void)setConditionDefinitionTextView:(UITextView *)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(SellingConditionFileParser *)parser;
-(void)setParser:(SellingConditionFileParser *)arg1 ;
@end
