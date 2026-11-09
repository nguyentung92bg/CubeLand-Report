/* IL2CPP: Rotatelab.FX.OpenGLMediaTekRenderEffectCrashFix$$Apply
void Rotatelab_FX_OpenGLMediaTekRenderEffectCrashFix__Apply (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.OpenGLMediaTekRenderEffectCrashFix$$Apply
   void Rotatelab_FX_OpenGLMediaTekRenderEffectCrashFix__Apply (const MethodInfo* method); */

void Rotatelab_FX_OpenGLMediaTekRenderEffectCrashFix__Apply_10fd514(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_0110d90c + 0x110d528);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d910 + 0x110d53c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d914 + 0x110d548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d918 + 0x110d554));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d91c + 0x110d560));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d920 + 0x110d56c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d924 + 0x110d578));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d928 + 0x110d584));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d92c + 0x110d590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d930 + 0x110d59c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d934 + 0x110d5a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d938 + 0x110d5b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110d93c + 0x110d5c0));
    *pcVar6 = '\x01';
  }
  puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(**(int **)(_UNK_0110d940 + 0x110d5dc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Application__get_isEditor_35a9d10(0);
  if ((iVar1 == 0) &&
     (iVar1 = Rotatelab_FX_OpenGLMediaTekRenderEffectCrashFix__IsOpenGLMediaTekDevice_10fd974(),
     iVar1 != 0)) {
    if (*(int *)(**(int **)(_UNK_0110d944 + 0x110d618) + 0x74) == 0) {
      FUN_00ec3934();
    }
    piVar2 = (int *)UnityEngine_Rendering_GraphicsSettings__get_currentRenderPipeline_3625424(0);
    if (piVar2 != (int *)0x0) {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_0110d948 + 0x110d648) + 0xb8);
      if ((uVar5 <= *(byte *)(*piVar2 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar2 + 100) + uVar5 * 4 + -4) ==
          **(int **)(_UNK_0110d948 + 0x110d648))) {
        uVar7 = **(undefined4 **)(_UNK_0110d950 + 0x110d688);
        if (*(int *)(*(int *)(*(int *)(_UNK_0110d94c + 0x110d67c) + 0x70) + 0x74) == 0) {
          FUN_00ec3934();
        }
        piVar3 = (int *)System_Type__GetTypeFromHandle_2b80928(uVar7,0);
        if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar3 = (int *)(**(code **)(*piVar3 + 0x368))
                                  (piVar3,**(undefined4 **)(_UNK_0110d954 + 0x110d6c8),0x24,
                                   *(undefined4 *)(*piVar3 + 0x36c));
        iVar1 = System_Reflection_FieldInfo__op_Equality_2a960d4(piVar3,0,0);
        if (iVar1 == 0) {
          if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar7 = (**(code **)(*piVar3 + 400))(piVar3,piVar2,*(undefined4 *)(*piVar3 + 0x194));
          iVar1 = thunk_FUN_00f00bc8(uVar7,**(undefined4 **)(_UNK_0110d958 + 0x110d720));
          if ((iVar1 != 0) && (uVar5 = *(uint *)(iVar1 + 0xc), 0 < (int)uVar5)) {
            uVar10 = 0;
            piVar2 = *(int **)(_UNK_0110d95c + 0x110d750);
            puVar8 = *(undefined4 **)(_UNK_0110d960 + 0x110d758);
            puVar11 = *(undefined4 **)(_UNK_0110d964 + 0x110d760);
            do {
              if (uVar5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f07924();
              }
              iVar9 = *(int *)(iVar1 + uVar10 * 4 + 0x10);
              if (*(int *)(*piVar2 + 0x74) == 0) {
                FUN_00ec3934();
              }
              iVar4 = UnityEngine_Object__op_Equality_36033f4(iVar9,0,0);
              if (iVar4 == 0) {
                if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                if (*(int *)(iVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                System_Collections_Generic_List_object___GetEnumerator_267e7a4
                          (&uStack_48,*(int *)(iVar9 + 0x18),
                           **(undefined4 **)(_UNK_0110d968 + 0x110d7d0));
                uStack_38 = uStack_48;
                puStack_34 = puStack_44;
                uStack_30 = uStack_40;
                iStack_2c = iStack_3c;
                uStack_48 = 0;
                puStack_44 = &uStack_38;
                while (iVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                                         (&uStack_38,*puVar8), iVar9 = iStack_2c, iVar4 != 0) {
                  if (*(int *)(*piVar2 + 0x74) == 0) {
                    FUN_00ec3934();
                  }
                  iVar4 = UnityEngine_Object__op_Inequality_36018e4(iVar9,0,0);
                  if (iVar4 != 0) {
                    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_00f078d4();
                    }
                    uVar7 = UnityEngine_Object__get_name_36081bc(iVar9,0);
                    iVar4 = System_String__op_Equality_2a0975c(uVar7,*puVar11,0);
                    if (iVar4 != 0) {
                      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        thunk_FUN_00f078d4();
                      }
                      *(undefined1 *)(iVar9 + 0xc) = 0;
                    }
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                          (&uStack_38,**(undefined4 **)(_UNK_0110d96c + 0x110d87c));
              }
              uVar5 = *(uint *)(iVar1 + 0xc);
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar5);
          }
        }
      }
    }
  }
  return;
}

