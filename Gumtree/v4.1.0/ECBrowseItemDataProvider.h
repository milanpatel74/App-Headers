/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ECBrowseItemDataProvider <NSObject>
@property (assign,nonatomic,__weak) id<ECBrowseItemDataProviderDelegate> browseItemDataProviderDelegate; 
@optional
-(id)statusStringForItem:(id)arg1;
-(id)searchParameters;

@required
-(id)browserItemAtIndex:(unsigned long long)arg1;
-(unsigned long long)indexOfBrowserItem:(id)arg1;
-(id)nextItemWithCurrentItem:(id)arg1;
-(id)previousItemWithCurrentItem:(id)arg1;
-(id<ECBrowseItemDataProviderDelegate>)browseItemDataProviderDelegate;
-(void)setBrowseItemDataProviderDelegate:(id)arg1;
-(unsigned long long)numberOfItems;

@end
