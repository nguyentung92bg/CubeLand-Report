/* IL2CPP: Rotatelab.HomePageCoordinator$$.ctor
void Rotatelab_HomePageCoordinator___ctor (Rotatelab_HomePageCoordinator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.HomePageCoordinator$$.ctor
   void Rotatelab_HomePageCoordinator___ctor (Rotatelab_HomePageCoordinator_o* __this, const
   MethodInfo* method); */

int Rotatelab_HomePageCoordinator___ctor_107a6ac(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_0108a744 + 0x108a6c0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a748 + 0x108a6d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a74c + 0x108a6e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a750 + 0x108a6ec));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108a754 + 0x108a700));
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor_200028c
            (uVar1,**(undefined4 **)(_UNK_0108a758 + 0x108a714));
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

