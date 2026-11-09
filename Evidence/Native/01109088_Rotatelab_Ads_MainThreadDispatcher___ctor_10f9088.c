/* IL2CPP: Rotatelab.Ads.MainThreadDispatcher$$.ctor
void Rotatelab_Ads_MainThreadDispatcher___ctor (Rotatelab_Ads_MainThreadDispatcher_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.MainThreadDispatcher$$.ctor
   void Rotatelab_Ads_MainThreadDispatcher___ctor (Rotatelab_Ads_MainThreadDispatcher_o* __this,
   const MethodInfo* method); */

int Rotatelab_Ads_MainThreadDispatcher___ctor_10f9088(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_0110910c + 0x110909c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109110 + 0x11090b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109114 + 0x11090bc));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01109118 + 0x11090d0));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar1,**(undefined4 **)(_UNK_0110911c + 0x11090e4));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0,extraout_r2,extraout_r3,unaff_r4
                       ,unaff_r5,unaff_r11,unaff_lr);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

