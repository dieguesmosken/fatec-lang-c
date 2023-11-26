-- Tabela "Alunos"
CREATE TABLE Alunos (
  ID_aluno INT PRIMARY KEY,
  Nome VARCHAR(50),
  Data_nascimento DATE,
  Endereço VARCHAR(100),
  Telefone VARCHAR(20)
);

-- Tabela "Professores"
CREATE TABLE Professores (
  ID_professor INT PRIMARY KEY,
  Nome VARCHAR(50),
  Data_nascimento DATE,
  Endereço VARCHAR(100),
  Telefone VARCHAR(20)
);

-- Tabela "Cursos"
CREATE TABLE Cursos (
  ID_curso INT PRIMARY KEY,
  Nome_curso VARCHAR(50),
  Descrição VARCHAR(200)
);

-- Tabela "Disciplinas"
CREATE TABLE Disciplinas (
  ID_disciplina INT PRIMARY KEY,
  Nome_disciplina VARCHAR(50),
  Descrição VARCHAR(200)
);

-- Tabela "Matrículas"
CREATE TABLE Matrículas (
  ID_aluno INT,
  ID_disciplina INT,
  Ano_semestre VARCHAR(10),
  Nota DECIMAL(4,2),
  PRIMARY KEY (ID_aluno, ID_disciplina),
  FOREIGN KEY (ID_aluno) REFERENCES Alunos(ID_aluno),
  FOREIGN KEY (ID_disciplina) REFERENCES Disciplinas(ID_disciplina)
);
