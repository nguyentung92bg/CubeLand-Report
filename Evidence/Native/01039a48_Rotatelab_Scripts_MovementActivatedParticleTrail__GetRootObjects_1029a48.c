/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$GetRootObjects
UnityEngine_GameObject_array* Rotatelab_Scripts_MovementActivatedParticleTrail__GetRootObjects (UnityEngine_Transform_array* roots, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$GetRootObjects
   UnityEngine_GameObject_array* Rotatelab_Scripts_MovementActivatedParticleTrail__GetRootObjects
   (UnityEngine_Transform_array* roots, const MethodInfo* method); */

int Rotatelab_Scripts_MovementActivatedParticleTrail__GetRootObjects_1029a48(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  
  pcVar4 = (char *)(_UNK_01039b8c + 0x1039a60);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01039b90 + 0x1039a74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01039b94 + 0x1039a80));
    *pcVar4 = '\x01';
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_01039b98 + 0x1039aa0),*(undefined4 *)(param_1 + 0xc));
  uVar2 = *(uint *)(param_1 + 0xc);
  if (0 < (int)uVar2) {
    uVar6 = 0;
    piVar9 = *(int **)(_UNK_01039b9c + 0x1039ad0);
    puVar7 = (undefined4 *)(iVar1 + 0x10);
    do {
      if (uVar2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar5 = *(undefined4 *)(param_1 + 0x10 + uVar6 * 4);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar8 = 0;
      iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar5,0,0);
      if (iVar3 != 0) {
        if (*(uint *)(param_1 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar3 = *(int *)(param_1 + 0x10 + uVar6 * 4);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar8 = UnityEngine_Component__get_gameObject_35fe360(iVar3,0);
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *puVar7 = uVar8;
      thunk_FUN_00ec5080(puVar7,uVar8);
      uVar2 = *(uint *)(param_1 + 0xc);
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 1;
    } while ((int)uVar6 < (int)uVar2);
  }
  return iVar1;
}

