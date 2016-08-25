/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECSectionMapGenerator.h>
@class ECSectionMap;


@protocol ECSectionMapGenerator <NSObject>
@property (nonatomic,retain) id<ECSectionMapReceiver> receiver; 
@property (nonatomic,readonly) ECSectionMap * sectionMap; 
@optional
-(id)initWithReceiver:(id)arg1;

@required
-(ECSectionMap *)sectionMap;
-(void)setReceiver:(id)arg1;
-(id<ECSectionMapReceiver>)receiver;

@end


@protocol ECSectionMapReceiver;
@class ECSectionMap, NSString;

@interface ECSectionMapGenerator : NSObject <ECSectionMapGenerator> {

	id<ECSectionMapReceiver> _receiver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<ECSectionMapReceiver> receiver;              //@synthesize receiver=_receiver - In the implementation block
@property (nonatomic,readonly) ECSectionMap * sectionMap; 
-(ECSectionMap *)sectionMap;
-(id)init;
-(void)setReceiver:(id<ECSectionMapReceiver>)arg1 ;
-(id<ECSectionMapReceiver>)receiver;
-(id)initWithReceiver:(id)arg1 ;
@end
