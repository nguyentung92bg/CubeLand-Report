/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$GetParticleSystemsFromRoots
UnityEngine_ParticleSystem_array* Rotatelab_Scripts_MovementActivatedParticleTrail__GetParticleSystemsFromRoots (UnityEngine_Transform_array* roots, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$GetParticleSystemsFromRoots
   UnityEngine_ParticleSystem_array*
   Rotatelab_Scripts_MovementActivatedParticleTrail__GetParticleSystemsFromRoots
   (UnityEngine_Transform_array* roots, const MethodInfo* method); */

int Rotatelab_Scripts_MovementActivatedParticleTrail__GetParticleSystemsFromRoots_10297d0
              (int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uStack_28;
  
  pcVar2 = (char *)(_UNK_01039a24 + 0x10397e8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01039a28 + 0x10397fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01039a2c + 0x1039808));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01039a30 + 0x1039814));
    *pcVar2 = '\x01';
  }
  uVar6 = 0;
  iVar4 = 0;
  piVar8 = *(int **)(_UNK_01039a34 + 0x1039834);
  do {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(param_1 + 0xc) <= (int)uVar6) {
      iVar4 = FUN_00ec388c(**(undefined4 **)(_UNK_01039a3c + 0x10398d8),iVar4);
      uVar6 = 0;
      uStack_28 = 0;
      do {
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(param_1 + 0xc) <= (int)uVar6) {
          return iVar4;
        }
        if (*(uint *)(param_1 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar5 = *(int *)(param_1 + uVar6 * 4 + 0x10);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar1 = UnityEngine_Object__op_Equality_36033f4(iVar5,0,0);
        if (iVar1 == 0) {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar5 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                            (iVar5,1,**(undefined4 **)(_UNK_01039a40 + 0x1039970));
          uVar7 = 0;
          puVar9 = (undefined4 *)(iVar4 + 0x10 + uStack_28 * 4);
          while( true ) {
            if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar7) break;
            if (*(uint *)(iVar5 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            uVar3 = *(undefined4 *)(iVar5 + 0x10 + uVar7 * 4);
            if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(uint *)(iVar4 + 0xc) <= uStack_28 + uVar7) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            *puVar9 = uVar3;
            thunk_FUN_00ec5080(puVar9,uVar3);
            uVar7 = uVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          piVar8 = *(int **)(_UNK_01039a44 + 0x1039a10);
          uStack_28 = uStack_28 + uVar7;
        }
        uVar6 = uVar6 + 1;
      } while( true );
    }
    if (*(uint *)(param_1 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(param_1 + 0x10 + uVar6 * 4);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Inequality_36018e4(iVar5,0,0);
    if (iVar1 != 0) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                        (iVar5,1,**(undefined4 **)(_UNK_01039a38 + 0x10398a0));
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = *(int *)(iVar5 + 0xc) + iVar4;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

