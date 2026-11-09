/* IL2CPP: Rotatelab.SingletonBehaviourFromResources<object>$$get_IsInstantiated
bool Rotatelab_SingletonBehaviourFromResources_object___get_IsInstantiated (const MethodInfo_1A99690* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SingletonBehaviourFromResources<object>$$get_IsInstantiated
   bool Rotatelab_SingletonBehaviourFromResources_object___get_IsInstantiated (const
   MethodInfo_1A99690* method); */

uint Rotatelab_SingletonBehaviourFromResources_object___get_IsInstantiated_1a99690
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 unaff_r4;
  undefined4 uVar3;
  undefined4 unaff_r5;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01aa9728 + 0x1aa96a4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01aa972c + 0x1aa96b8));
    *pcVar4 = '\x01';
    param_4 = extraout_r3;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
    param_4 = extraout_r3_00;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
    param_4 = extraout_r3_01;
  }
  uVar3 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_01aa9730 + 0x1aa96f8) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_01aa9730 + 0x1aa96f8));
    param_4 = extraout_r3_02;
  }
  pcVar4 = (char *)(_UNK_03611948 + 0x36118fc);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0361194c + 0x3611910),0,0,param_4,unaff_r4,unaff_r5);
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03611950 + 0x3611924) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  uVar2 = UnityEngine_Object__CompareBaseObjects_3607f30(uVar3,0);
  return uVar2 ^ 1;
}

