/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$Awake
void Rotatelab_Scripts_MovementActivatedParticleTrail__Awake (Rotatelab_Scripts_MovementActivatedParticleTrail_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$Awake
   void Rotatelab_Scripts_MovementActivatedParticleTrail__Awake
   (Rotatelab_Scripts_MovementActivatedParticleTrail_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_MovementActivatedParticleTrail__Awake_10295e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_010397b4 + 0x10395f8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010397b8 + 0x103960c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010397bc + 0x1039618));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010397c0 + 0x1039624));
    *pcVar6 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar4 = 0;
  uStack_24 = 0;
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0xc);
  }
  if (iVar1 != 0 && iVar4 != 0) {
    uVar2 = Rotatelab_Scripts_MovementActivatedParticleTrail__GetParticleSystemsFromRoots_10297d0();
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    thunk_FUN_00ec5080();
    iVar4 = Rotatelab_Scripts_MovementActivatedParticleTrail__GetRootObjects_1029a48
                      (*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x24) = iVar4;
  }
  else {
    uVar2 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                      (param_1,1,**(undefined4 **)(_UNK_010397c4 + 0x1039658));
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    thunk_FUN_00ec5080();
    iVar4 = FUN_00ec388c(**(undefined4 **)(_UNK_010397c8 + 0x1039680),1);
    uVar2 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar4 + 0x10) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(iVar4 + 0x10),uVar2);
    *(int *)(param_1 + 0x24) = iVar4;
  }
  thunk_FUN_00ec5080(param_1 + 0x24,iVar4);
  if (*(char *)(param_1 + 0x18) != '\0') {
    iVar4 = *(int *)(param_1 + 0x20);
    uVar5 = 0;
    piVar7 = *(int **)(_UNK_010397cc + 0x1039728);
    while( true ) {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar5) break;
      if (*(uint *)(iVar4 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar1 = *(int *)(iVar4 + 0x10 + uVar5 * 4);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar3 = UnityEngine_Object__op_Equality_36033f4(iVar1,0,0);
      if (iVar3 == 0) {
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uStack_24 = UnityEngine_ParticleSystem__get_main_368ecf8(iVar1,0);
        UnityEngine_ParticleSystem_MainModule__set_simulationSpace_368f4a0(&uStack_24,1,0);
      }
      uVar5 = uVar5 + 1;
    }
  }
  return;
}

