/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, EGODatabaseResult;

@interface EGODatabaseRow : NSObject {

	NSMutableArray* columnData;
	EGODatabaseResult* result;

}

@property (readonly) NSMutableArray * columnData; 
-(id)stringForColumn:(id)arg1 ;
-(id)dataForColumn:(id)arg1 ;
-(BOOL)boolForColumn:(id)arg1 ;
-(int)intForColumn:(id)arg1 ;
-(unsigned long long)uint64ForColumn:(id)arg1 ;
-(NSMutableArray *)columnData;
-(unsigned long long)uint64ForColumnIndex:(int)arg1 ;
-(double)doubleForColumn:(id)arg1 ;
-(unsigned long long)unsignedIntegerForColumnIndex:(int)arg1 ;
-(unsigned long long)unsignedIntegerForColumn:(id)arg1 ;
-(id)dateForColumn:(id)arg1 ;
-(id)initWithDatabaseResult:(id)arg1 ;
-(BOOL)columnTypeIsStringAtIndex:(int)arg1 ;
-(long long)longForColumnIndex:(int)arg1 ;
-(id)dateForColumnIndex:(int)arg1 ;
-(BOOL)columnTypeIsDataAtIndex:(int)arg1 ;
-(long long)longForColumn:(id)arg1 ;
-(long long)int64ForColumn:(id)arg1 ;
-(BOOL)boolForColumnIndex:(int)arg1 ;
-(void)dealloc;
-(long long)int64ForColumnIndex:(int)arg1 ;
-(id)stringForColumnIndex:(int)arg1 ;
-(int)intForColumnIndex:(int)arg1 ;
-(id)dataForColumnIndex:(int)arg1 ;
-(double)doubleForColumnIndex:(int)arg1 ;
@end
