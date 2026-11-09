/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$BuildPool
UnityEngine_ParticleSystem_array* Rotatelab_Scripts_BulletParticleManager__BuildPool (UnityEngine_ParticleSystem_o* _template, int32_t size, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$BuildPool
   UnityEngine_ParticleSystem_array* Rotatelab_Scripts_BulletParticleManager__BuildPool
   (UnityEngine_ParticleSystem_o* _template, int32_t size, const MethodInfo* method); */

int Rotatelab_Scripts_BulletParticleManager__BuildPool_ff9f30(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uStack_28;
  
  pcVar4 = (char *)(_UNK_0100a174 + 0x1009f4c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100a178 + 0x1009f60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100a17c + 0x1009f6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100a180 + 0x1009f78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100a184 + 0x1009f84));
    *pcVar4 = '\x01';
  }
  iVar6 = 0;
  uStack_28 = 0;
  if (*(int *)(**(int **)(_UNK_0100a188 + 0x1009f9c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_1,0,0);
  if (iVar1 == 0) {
    if ((int)param_2 < 2) {
      param_2 = 1;
    }
    iVar6 = FUN_00ec388c(**(undefined4 **)(_UNK_0100a18c + 0x1009fe0),param_2);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar6 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar7 = (int *)(iVar6 + 0x10);
    *piVar7 = param_1;
    thunk_FUN_00ec5080(piVar7,param_1);
    uStack_28 = 1;
    if (1 < param_2) {
      puVar8 = *(undefined4 **)(_UNK_0100a190 + 0x100a038);
      do {
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = UnityEngine_Transform__get_parent_36148d8(iVar1,0);
        if (*(int *)(**(int **)(_UNK_0100a194 + 0x100a078) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar1 = UnityEngine_Object__Instantiate_object__14d4dd0
                          (param_1,uVar2,**(undefined4 **)(_UNK_0100a198 + 0x100a098));
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = UnityEngine_Object__get_name_36081bc(param_1,0);
        uVar3 = System_Int32__ToString_2b6b9ec(&uStack_28,0);
        uVar2 = System_String__Concat_2a0b574(uVar2,*puVar8,uVar3,0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Object__set_name_360832c(iVar1,uVar2,0);
        if (*(uint *)(iVar6 + 0xc) <= uStack_28) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(int *)(iVar6 + uStack_28 * 4 + 0x10) = iVar1;
        thunk_FUN_00ec5080(piVar7 + uStack_28,iVar1);
        uStack_28 = uStack_28 + 1;
      } while ((int)uStack_28 < (int)param_2);
    }
    uVar5 = 0;
    do {
      if (*(uint *)(iVar6 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      Rotatelab_Scripts_BulletParticleManager__ForceOneShot_ffa19c
                (*(undefined4 *)(iVar6 + uVar5 * 4 + 0x10));
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
  }
  return iVar6;
}

