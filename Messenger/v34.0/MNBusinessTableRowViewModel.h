/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSArray, MNBusinessTableRowLayoutInfo;

@interface MNBusinessTableRowViewModel : FBValueObject <NSCopying> {

	NSArray* _cells;
	MNBusinessTableRowLayoutInfo* _layoutInfo;

}

@property (nonatomic,copy,readonly) NSArray * cells;                                        //@synthesize cells=_cells - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessTableRowLayoutInfo * layoutInfo;              //@synthesize layoutInfo=_layoutInfo - In the implementation block
+(id)MNBusinessTableRowViewModelWithStrings:(id)arg1 color:(id)arg2 font:(id)arg3 layoutInfo:(id)arg4 alignment:(unsigned long long)arg5 ;
+(id)MNBusinessTableRowViewModelWithStrings:(id)arg1 colors:(id)arg2 fonts:(id)arg3 layoutInfo:(id)arg4 alignment:(unsigned long long)arg5 ;
-(id)initWithCells:(id)arg1 layoutInfo:(id)arg2 ;
-(MNBusinessTableRowLayoutInfo *)layoutInfo;
-(NSArray *)cells;
@end

