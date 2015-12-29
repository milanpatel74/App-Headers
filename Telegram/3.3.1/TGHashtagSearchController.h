//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

#import "TGSearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, SMetaDisposable, UITableView;

@interface TGHashtagSearchController : TGViewController <UITableViewDataSource, UITableViewDelegate, TGSearchBarDelegate>
{
    NSString *_query;
    long long _peerId;
    long long _accessHash;
    NSArray *_searchResults;
    SMetaDisposable *_searchDisposable;
    SMetaDisposable *_downloadHistoryDisposable;
    UITableView *_tableView;
    CDUnknownBlockType _customResultBlock;
}

+ (void)initializeDialogListData:(id)arg1 customUser:(id)arg2 selfUser:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType customResultBlock; // @synthesize customResultBlock=_customResultBlock;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)prepareCell:(id)arg1 forConversation:(id)arg2 animated:(_Bool)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBar:(id)arg1 willChangeHeight:(double)arg2;
- (void)setSearchResults:(id)arg1;
- (void)beginSearchWithQuery:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 peerId:(long long)arg2 accessHash:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

