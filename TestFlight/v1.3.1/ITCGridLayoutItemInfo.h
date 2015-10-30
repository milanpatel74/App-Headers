/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <TestFlight/TestFlight-Structs.h>
@class ITCGridLayoutRowInfo;

@interface ITCGridLayoutItemInfo : NSObject {

	BOOL _dragging;
	BOOL _hasEstimatedHeight;
	ITCGridLayoutRowInfo* _row;
	long long _columnIndex;
	CGRect _frame;

}

@property (assign,nonatomic,__weak) ITCGridLayoutRowInfo * row;              //@synthesize row=_row - In the implementation block
@property (assign,nonatomic) BOOL dragging;                                  //@synthesize dragging=_dragging - In the implementation block
@property (assign,nonatomic) long long columnIndex;                          //@synthesize columnIndex=_columnIndex - In the implementation block
@property (assign,nonatomic) CGRect frame;                                   //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) BOOL hasEstimatedHeight;                        //@synthesize hasEstimatedHeight=_hasEstimatedHeight - In the implementation block
-(void)setDragging:(BOOL)arg1 ;
-(BOOL)dragging;
-(void)setHasEstimatedHeight:(BOOL)arg1 ;
-(BOOL)hasEstimatedHeight;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(ITCGridLayoutRowInfo *)row;
-(void)setRow:(ITCGridLayoutRowInfo *)arg1 ;
-(long long)columnIndex;
-(void)setColumnIndex:(long long)arg1 ;
@end

