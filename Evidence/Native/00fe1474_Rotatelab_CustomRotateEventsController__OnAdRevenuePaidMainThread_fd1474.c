/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnAdRevenuePaidMainThread
void Rotatelab_CustomRotateEventsController__OnAdRevenuePaidMainThread (Rotatelab_CustomRotateEventsController_o* __this, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnAdRevenuePaidMainThread
   void Rotatelab_CustomRotateEventsController__OnAdRevenuePaidMainThread
   (Rotatelab_CustomRotateEventsController_o* __this, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo*
   method); */

void Rotatelab_CustomRotateEventsController__OnAdRevenuePaidMainThread_fd1474
               (undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_00fe1828 + 0xfe1490);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe182c + 0xfe14a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1830 + 0xfe14b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1834 + 0xfe14bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1838 + 0xfe14c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe183c + 0xfe14d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1840 + 0xfe14e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1844 + 0xfe14ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1848 + 0xfe14f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe184c + 0xfe1504));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1850 + 0xfe1510));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1854 + 0xfe151c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1858 + 0xfe1528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe185c + 0xfe1534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1860 + 0xfe1540));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1864 + 0xfe154c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1868 + 0xfe1558));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe186c + 0xfe1564));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1870 + 0xfe1570));
    *pcVar4 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe1874 + 0xfe1584));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = (int *)(iVar1 + 8);
  *piVar5 = param_2;
  thunk_FUN_00ec5080(piVar5,param_2);
  piVar6 = *(int **)(_UNK_00fe1878 + 0xfe15c0);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Facebook_Unity_FB__get_IsInitialized_118c748(0);
  if (iVar2 == 0) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00fe1898 + 0xfe16c0));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8
              (iVar2,**(undefined4 **)(_UNK_00fe189c + 0xfe16e4),0);
  }
  else {
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe187c + 0xfe15ec));
    System_Collections_Generic_Dictionary_object__object____ctor_20688f4
              (iVar2,**(undefined4 **)(_UNK_00fe1880 + 0xfe1600));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item_2069314
              (iVar2,**(undefined4 **)(_UNK_00fe188c + 0xfe1638),
               **(undefined4 **)(_UNK_00fe1888 + 0xfe162c),
               **(undefined4 **)(_UNK_00fe1884 + 0xfe1620));
    if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_24 = 0;
    uStack_28 = 0;
    System_Nullable_float____ctor_17dea40
              (&uStack_28,(float)*(double *)(*piVar5 + 0x20),
               **(undefined4 **)(_UNK_00fe1890 + 0xfe1668));
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Facebook_Unity_FB__LogAppEvent_118e798
              (**(undefined4 **)(_UNK_00fe1894 + 0xfe16a8),uStack_28,uStack_24,iVar2,0);
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fe18a0 + 0xfe16f8));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(iVar2 + 0x44),**(undefined4 **)(_UNK_00fe18a4 + 0xfe1718));
  if (iVar2 != 0) {
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe18a8 + 0xfe1734));
    System_Func_UniTask____ctor_2395d44(uVar3,iVar1,**(undefined4 **)(_UNK_00fe18ac + 0xfe1754),0);
    if (*(int *)(**(int **)(_UNK_00fe18b0 + 0xfe1768) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Networking_HiroController__ExecuteTask_114cc9c(&uStack_28,uVar3,3,0,0x40000000,0,0,0);
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget_bool__16500f4
              (uStack_28,uStack_24,**(undefined4 **)(_UNK_00fe18b4 + 0xfe17b0));
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = **(undefined4 **)(_UNK_00fe18b8 + 0xfe17f4);
  *(double *)(iVar1 + 0xc0) = *(double *)(iVar1 + 0xc0) + *(double *)(*piVar5 + 0x20);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar1,0);
  Rotatelab_CustomRotateEventsController__SetUserProperties_fca284();
  return;
}

