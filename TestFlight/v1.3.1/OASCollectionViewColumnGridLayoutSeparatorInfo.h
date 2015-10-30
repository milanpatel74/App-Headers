/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface OASCollectionViewColumnGridLayoutSeparatorInfo : NSObject {

	BOOL _showSideSeparator;
	BOOL _showBottomSeparator;
	double _bottomSeparatorInset;

}

@property (nonatomic,readonly) BOOL showSideSeparator;                   //@synthesize showSideSeparator=_showSideSeparator - In the implementation block
@property (nonatomic,readonly) BOOL showBottomSeparator;                 //@synthesize showBottomSeparator=_showBottomSeparator - In the implementation block
@property (nonatomic,readonly) double bottomSeparatorInset;              //@synthesize bottomSeparatorInset=_bottomSeparatorInset - In the implementation block
+(id)separatorColor;
-(id)initWithSideSeparator:(BOOL)arg1 bottomSeparator:(BOOL)arg2 bottomInset:(double)arg3 ;
-(BOOL)showSideSeparator;
-(id)copyWithoutBottomSeparator;
-(BOOL)showBottomSeparator;
-(double)bottomSeparatorInset;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
@end

