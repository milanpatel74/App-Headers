/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GAITracker <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (assign,nonatomic) BOOL allowIDFACollection; 
@required
-(void)setAllowIDFACollection:(BOOL)arg1;
-(void)set:(id)arg1 value:(id)arg2;
-(id)get:(id)arg1;
-(BOOL)allowIDFACollection;
-(NSString *)name;
-(void)send:(id)arg1;

@end
