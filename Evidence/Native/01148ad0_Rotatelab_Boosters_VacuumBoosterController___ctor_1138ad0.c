/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$.ctor
void Rotatelab_Boosters_VacuumBoosterController___ctor (Rotatelab_Boosters_VacuumBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$.ctor
   void Rotatelab_Boosters_VacuumBoosterController___ctor
   (Rotatelab_Boosters_VacuumBoosterController_o* __this, const MethodInfo* method); */

int Rotatelab_Boosters_VacuumBoosterController___ctor_1138ad0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01148c90 + 0x1148ae4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148c94 + 0x1148af8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148c98 + 0x1148b04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148c9c + 0x1148b10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148ca0 + 0x1148b1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148ca4 + 0x1148b28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148ca8 + 0x1148b34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148cac + 0x1148b40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148cb0 + 0x1148b4c));
    *pcVar4 = '\x01';
  }
  uVar1 = UnityEngine_Animator__StringToHash_3591078(**(undefined4 **)(_UNK_01148cb4 + 0x1148b64),0)
  ;
  puVar3 = *(undefined4 **)(_UNK_01148cb8 + 0x1148b74);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  iVar2 = FUN_00ec388c(*puVar3,3);
  uVar1 = UnityEngine_Shader__PropertyToID_35c3e0c(**(undefined4 **)(_UNK_01148cbc + 0x1148b98),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  puVar3 = *(undefined4 **)(_UNK_01148cc0 + 0x1148bcc);
  *(undefined4 *)(iVar2 + 0x10) = uVar1;
  uVar1 = UnityEngine_Shader__PropertyToID_35c3e0c(*puVar3,0);
  if (*(uint *)(iVar2 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  puVar3 = *(undefined4 **)(_UNK_01148cc4 + 0x1148bf8);
  *(undefined4 *)(iVar2 + 0x14) = uVar1;
  uVar1 = UnityEngine_Shader__PropertyToID_35c3e0c(*puVar3,0);
  if (*(uint *)(iVar2 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(int *)(param_1 + 0x34) = iVar2;
  *(undefined4 *)(iVar2 + 0x18) = uVar1;
  thunk_FUN_00ec5080((int *)(param_1 + 0x34),iVar2);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01148cc8 + 0x1148c34));
  System_Collections_Generic_List_ValueTuple_object__Quaternion_____ctor_25b9148
            (uVar1,8,**(undefined4 **)(_UNK_01148ccc + 0x1148c4c));
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x3c),uVar1);
  if (*(int *)(**(int **)(_UNK_01148cd0 + 0x1148c70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

