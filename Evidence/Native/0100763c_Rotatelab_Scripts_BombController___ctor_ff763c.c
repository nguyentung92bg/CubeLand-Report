/* IL2CPP: Rotatelab.Scripts.BombController$$.ctor
void Rotatelab_Scripts_BombController___ctor (Rotatelab_Scripts_BombController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BombController$$.ctor
   void Rotatelab_Scripts_BombController___ctor (Rotatelab_Scripts_BombController_o* __this, const
   MethodInfo* method); */

int Rotatelab_Scripts_BombController___ctor_ff763c(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_01007710 + 0x1007650);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007714 + 0x1007664));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007718 + 0x1007670));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100771c + 0x100767c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007720 + 0x1007688));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01007724 + 0x100769c));
  System_Collections_Generic_List_Vector3Int____ctor_26ff1a0
            (uVar1,**(undefined4 **)(_UNK_01007728 + 0x10076b0));
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x4c),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0100772c + 0x10076d4));
  System_Collections_Generic_Dictionary_Int32Enum__int____ctor_1ff9064
            (uVar1,**(undefined4 **)(_UNK_01007730 + 0x10076e8));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x50),uVar1);
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

